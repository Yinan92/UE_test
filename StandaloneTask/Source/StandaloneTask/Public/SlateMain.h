// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h" //老版本只写 SCompoundWidget.h 就可以

class SCheckBox;
class SMainSlate :public SCompoundWidget// 还可以继承自 SUserWidget，也是继承于 SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SMainSlate)
	{}

	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);//构造

public:
	template<int32 Index>	//模板
	void OnValueChanged(ECheckBoxState NewState)	//自定义函数切换敲击状态
	{
		if (CheckBoxArray.IsValidIndex(Index))	//判断当前的序列号是否有意义，无意义时执行下面代码会导致崩溃
		{
			for (int32 i = 0; i < CheckBoxArray.Num(); i++)
			{
				if (CheckBoxArray[i].IsValid())
				{
					if (Index == i)
					{
						CheckBoxArray[i]->SetIsChecked(ECheckBoxState::Checked);
					}
					else
					{
						CheckBoxArray[i]->SetIsChecked(ECheckBoxState::Unchecked);
					}
				}
			}
		}
	}	


protected:

	TArray< TSharedPtr<SCheckBox> > CheckBoxArray;
};