// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SniperPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SNIPERACADEMY_API ASniperPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Score")
		void SetScore(int value);

	UFUNCTION(BlueprintCallable, Category = "Score")
		int GetScore();


protected:
	int score;
	
};
