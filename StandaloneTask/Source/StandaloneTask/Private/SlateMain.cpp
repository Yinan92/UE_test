#include "SlateMain.h"

#define LOCTEXT_NAMESPACE "MainSlate" //每一个slate都会有 LOCTEXT_NAMESPACE

void SMainSlate::Construct(const FArguments& InArgs)
{
	CheckBoxArray.SetNum(4);	//分配四个元素的内存，否则会崩溃

	ChildSlot
	[
		SNew(SVerticalBox)

		+ SVerticalBox::Slot()
		.Padding(10.f) //间隙
		.AutoHeight() //该插槽在面板方向上应占据多少空间
		.VAlign(VAlign_Bottom) //垂直分布
		.HAlign(HAlign_Left) //水平分布
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Top)
			.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
			[
				SAssignNew(CheckBoxArray[0], SCheckBox)	//因为需要返回值，返回当前状态存储到TArray，所以需要用SAssignNew
				.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<0>)	//绑定事件，当敲击此按钮时，触发事件。执行模板，并输入0号
				.ToolTipText(LOCTEXT("CellA", "Cell1"))	//设置描述，如果没有写LOCTEXT_NAMESPACE的话，这里的LOCTEXT会报错
				.IsChecked(ECheckBoxState::Unchecked)	//设置默认敲击状态
				.Content()	//Content后面可以加插槽
				[
					SNew(STextBlock)	//添加Text插槽
					.Text(LOCTEXT("CheckCellA", "Cell01"))
				]
			]

			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Top)
			.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
			[
				SAssignNew(CheckBoxArray[1], SCheckBox)	
				.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<1>)
				.ToolTipText(LOCTEXT("CellB", "Cell2"))
				.IsChecked(ECheckBoxState::Unchecked)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("CheckCellB", "Cell02"))
				]
			]

			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Top)
			.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
			[
				SAssignNew(CheckBoxArray[2], SCheckBox)
				.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<2>)
				.ToolTipText(LOCTEXT("CellC", "Cell3"))
				.IsChecked(ECheckBoxState::Unchecked)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("CheckCellC", "Cell03"))
				]
			]

			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Top)
			.Padding(FMargin(0.f, 0.f, 4.f, 0.f))
			[
				SAssignNew(CheckBoxArray[3], SCheckBox)
				.OnCheckStateChanged(this, &SMainSlate::OnValueChanged<3>)
				.ToolTipText(LOCTEXT("CellD", "Cell4"))
				.IsChecked(ECheckBoxState::Unchecked)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("CheckCellD", "Cell04"))
				]
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE