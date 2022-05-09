// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SInputButton :public SCompoundWidget// 还可以继承自 SUserWidget，也是继承于 SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SInputButton)
	{}

	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);
};