// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()
	
public:
	void handleDestruction();

protected:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class ATank* targetActor;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float towerRange = 250.f;

	FTimerHandle fireRateTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	float fireRate = 1.f;

	// Callback function
	void checkFireCondition();

	// Check if the target is in fire range
	bool inFireRange();
};
