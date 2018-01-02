// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAIController.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "PatorlPoint.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "Perception/AIPerceptionComponent.h"
#include "EnemyCharacter.h"




AEnemyAIController::AEnemyAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));


	EnemyKeyID = "Target";

	Nextpoint = "NextPoint";

	CurrentPatrolPoint = 0;
}



void AEnemyAIController::SetTargetEnemy(APawn* NewTarget)
{
	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsObject(EnemyKeyID, NewTarget);
	}
}

void AEnemyAIController::Possess(APawn * InPawn)
{

	Super::Possess(InPawn);

	AEnemyCharacter* Char = Cast<AEnemyCharacter>(InPawn);

	if (Char && Char->BotBehavior)
	{
		BlackboardComp->InitializeBlackboard(*Char->BotBehavior->BlackboardAsset);

		UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Patrol1", BotTargetPoints);

		BehaviorComp->StartTree(*Char->BotBehavior);
	}
}

APatorlPoint* AEnemyAIController::GetTarget()
{
	if (BlackboardComp)
	{
		return Cast<APatorlPoint>(BlackboardComp->GetValueAsObject(EnemyKeyID));
	}
	return nullptr;
}