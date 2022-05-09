// Copyright Epic Games, Inc. All Rights Reserved.

#include "StandaloneTask.h"
#include "StandaloneTaskStyle.h"
#include "StandaloneTaskCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "SlateMain.h"

static const FName StandaloneTaskTabName("StandaloneTask");

#define LOCTEXT_NAMESPACE "FStandaloneTaskModule"

void FStandaloneTaskModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FStandaloneTaskStyle::Initialize();
	FStandaloneTaskStyle::ReloadTextures();

	FStandaloneTaskCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FStandaloneTaskCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FStandaloneTaskModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FStandaloneTaskModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(StandaloneTaskTabName, FOnSpawnTab::CreateRaw(this, &FStandaloneTaskModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FStandaloneTaskTabTitle", "StandaloneTask"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FStandaloneTaskModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FStandaloneTaskStyle::Shutdown();

	FStandaloneTaskCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(StandaloneTaskTabName);
}

TSharedRef<SDockTab> FStandaloneTaskModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FStandaloneTaskModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("StandaloneTask.cpp"))
		);


	return SNew(SDockTab)
	[
		SAssignNew(MainSlate, SMainSlate)
	];
		/*
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
		*/
}

void FStandaloneTaskModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(StandaloneTaskTabName);
}

void FStandaloneTaskModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FStandaloneTaskCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FStandaloneTaskCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FStandaloneTaskModule, StandaloneTask)