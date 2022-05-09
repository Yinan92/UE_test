// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DllTest.generated.h"

/**
 *
 */
UCLASS()
class TESTP_API ADllTest : public APawn
{
	GENERATED_BODY()

		
public: //将函数公开
	UFUNCTION(BlueprintCallable, Category = "Dll") 
	void HelloDll();
};
