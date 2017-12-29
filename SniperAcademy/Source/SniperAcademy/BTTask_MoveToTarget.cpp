// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_MoveToTarget.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "SniperAcademy.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"

EBTNodeResult::Type UBTTask_MoveToTarget::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AEnemyAIController* CharPC = Cast<AEnemyAIController>(OwnerComp.GetOwner());

	APatorlPoint* Enemy = Cast<APatorlPoint>(OwnerComp.GetBlackboardComponent()->GetValue<UBlackboardKeyType_Object>(CharPC->EnemyKeyID));

	if (Enemy)
	{
		CharPC->MoveToActor(Enemy, 5.0f, true, true, true, 0, true);
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
	return EBTNodeResult::Failed;

}



