// Copyright Epic Games, Inc. All Rights Reserved.

#include "StandaloneTaskCommands.h"

#define LOCTEXT_NAMESPACE "FStandaloneTaskModule"

void FStandaloneTaskCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "StandaloneTask", "Bring up StandaloneTask window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
