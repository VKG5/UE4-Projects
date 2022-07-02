// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();

	targetActor = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Find distance to the Tank
	// Checking if the target is valid or not
	if (targetActor)
	{
		float distance = FVector::Dist(GetActorLocation(), targetActor->GetActorLocation());
		

		// Check to se if the Tank is in range
		if (distance <= towerRange)
		{
			// If in range, rotate the turret towards tank
			rotateTurret(targetActor->GetActorLocation());
		}
	}
}