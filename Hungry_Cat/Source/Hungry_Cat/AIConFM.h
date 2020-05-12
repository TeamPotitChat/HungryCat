// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIConFM.generated.h"

/**
 * 
 */
UCLASS()
class HUNGRY_CAT_API AAIConFM : public AAIController
{
	GENERATED_BODY()
	
public:
	AAIConFM();
	UPROPERTY(VisibleAnyWhere, Category = "Perception")
		class UAIPerceptionComponent* perceptionComp;
	UPROPERTY(EditDefaultsOnly, Category = "Perception")
		class UAISenseConfig_Sight* sightConfig;
};
