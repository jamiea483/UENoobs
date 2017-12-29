// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_MoveToPoint.h"
#include "SniperAcademy.h"
#include "PatorlPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include  "EnemyAIController.h"


EBTNodeResult::Type UBTTask_MoveToPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AEnemyAIController* CharPC = Cast<AEnemyAIController>(OwnerComp.GetOwner());

	if (CharPC)
	{
		/*Get BB Component*/
		UBlackboardComponent* BlackboardComp = CharPC->GetBlackboardComp();

		APatorlPoint* CurrentPoint = Cast<APatorlPoint>(BlackboardComp->GetValueAsObject("NextPoint"));

		TArray<AActor*> AvailablepatrolPoints = CharPC->GetAvailableTargetPoints();

		APatorlPoint* NextPatrolPoint = nullptr;

		if (CharPC->CurrentPatrolPoint != AvailablepatrolPoints.Num() - 1)
		{
			
			NextPatrolPoint = Cast<APatorlPoint>(AvailablepatrolPoints[++CharPC->CurrentPatrolPoint]);
		}
		else  //If there is not any more points to go to. 
		{
			NextPatrolPoint = Cast<APatorlPoint>(AvailablepatrolPoints[0]);
			CharPC->CurrentPatrolPoint = 0;
		}
		BlackboardComp->SetValueAsObject("NextPoint", NextPatrolPoint);

		return EBTNodeResult::Succeeded;

	}
	
	return EBTNodeResult::Failed;
}



