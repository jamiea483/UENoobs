// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MoveToTarget.generated.h"

/**
 * 
 */
UCLASS()
class SNIPERACADEMY_API UBTTask_MoveToTarget : public UBTTaskNode
{
	GENERATED_BODY()
	
	
		virtual	 EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
