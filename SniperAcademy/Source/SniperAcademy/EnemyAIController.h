// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PatorlPoint.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
//UENUM(BlueprintType)
//enum class State : uint8
//{
//	EC_Start		UMETA(DisplayName = "Start"),
//	EC_Running		UMETA(DisplayName = "Running"),
//	EC_Pause		UMETA(DisplayName = "Pause"),
//	EC_GameOver		UMETA(DisplayName = "GameOver")
//};

UCLASS()
class SNIPERACADEMY_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
		UPROPERTY(transient)
		class UBlackboardComponent* BlackboardComp;

	UPROPERTY(transient)
		class UBehaviorTreeComponent* BehaviorComp;

	UPROPERTY(VisibleAnywhere, Category = "AIComp")
		TArray<AActor*> BotTargetPoints;
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	//	EControllerEnum ControllerEnum;
	
public:
	AEnemyAIController(const FObjectInitializer& ObjectInitializer);

	APatorlPoint* GetTarget();

	void SetTargetEnemy(APawn* NewTarget);

	virtual void Possess(APawn* InPawn) override;

	FName EnemyKeyID;

	FName Nextpoint;

	int32 CurrentPatrolPoint;


	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }

	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return BotTargetPoints; }

};
