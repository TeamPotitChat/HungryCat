// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AICharFM.generated.h"

UCLASS()
class HUNGRY_CAT_API AAICharFM : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharFM();
	UFUNCTION(BlueprintNativeEvent, Category = "AIVariables | Character")
		void GetPerceptionLocRot(FVector &outLocation, FRotator &outRotation) const;
	void GetPerceptionLocRot_Implementation(FVector &outLocation, FRotator &outRotation) const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetActorEyesViewPoint(FVector &Location, FRotator &Rotation) const override;
};
