// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "StandaloneTaskStyle.h"

class FStandaloneTaskCommands : public TCommands<FStandaloneTaskCommands>
{
public:

	FStandaloneTaskCommands()
		: TCommands<FStandaloneTaskCommands>(TEXT("StandaloneTask"), NSLOCTEXT("Contexts", "StandaloneTask", "StandaloneTask Plugin"), NAME_None, FStandaloneTaskStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};