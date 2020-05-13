// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharFM.h"

// Sets default values
AAICharFM::AAICharFM()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAICharFM::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharFM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharFM::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAICharFM::GetActorEyesViewPoint(FVector & Location, FRotator & Rotation) const
{
	GetPerceptionLocRot(Location, Rotation);
}

void AAICharFM::GetPerceptionLocRot_Implementation(FVector & outLocation, FRotator & outRotation) const
{
	outLocation = GetActorLocation() + FVector(0, 0, 50);
	outRotation = GetActorRotation();
}


