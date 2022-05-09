#include "SlateMain.h"

#define LOCTEXT_NAMESPACE "MainSlate" //每一个slate都会有 LOCTEXT_NAMESPACE

void SMainSlate::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(SVerticalBox)

		+ SVerticalBox::Slot()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
			[
				SNew(SCheckBox)
			]

			+ SHorizontalBox::Slot()
			[
				SNew(SCheckBox)
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE