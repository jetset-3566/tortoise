// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "tortoiseGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TORTOISE_API AtortoiseGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	FString ChangeLetters(FString InputLetters);
};
