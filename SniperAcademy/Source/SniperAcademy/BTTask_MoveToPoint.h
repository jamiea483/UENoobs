// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MoveToPoint.generated.h"

/**
 * 
 */
UCLASS()
class SNIPERACADEMY_API UBTTask_MoveToPoint : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;
	
};
