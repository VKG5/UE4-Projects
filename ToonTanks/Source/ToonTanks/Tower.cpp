// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void ATower::BeginPlay()
{
	Super::BeginPlay();

	targetActor = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer(fireRateTimerHandle, this, &ATower::checkFireCondition, fireRate, true);
}

void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(inFireRange())
	{
		// If in range, rotate the turret towards tank
		rotateTurret(targetActor->GetActorLocation());
	}
}

void ATower::checkFireCondition()
{
	// Find distance to the Tank
	// Checking if the target is valid or not
	if (inFireRange())
	{
		// If in range, fire projectile
		fireProjectile();
	}
}

bool ATower::inFireRange()
{
	// Find distance to the Tank
	// Checking if the target is valid or not
	if (targetActor)
	{
		float distance = FVector::Dist(GetActorLocation(), targetActor->GetActorLocation());

		// Check to see if the Tank is in range
		if (distance <= towerRange)
		{
			// Debugging
			//UE_LOG(LogTemp, Warning, TEXT("Firing Tower"));

			// Return true
			return true;
		}
	}

	// If not in fire range
	return false;
}