// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h" //老版本只写 SCompoundWidget.h 就可以

class SMainSlate :public SCompoundWidget// 还可以继承自 SUserWidget，也是继承于 SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SMainSlate)
	{}

	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);//构造
};