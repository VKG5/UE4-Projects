// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void handleDestruction();

protected:
	// Rotating the turret
	void rotateTurret(FVector targetLocation);

	// Fire Projectiles function
	void fireProjectile();

private:
	// Forward Declaration - Include as little as you can in the header file
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class UCapsuleComponent* capsuleComponent;

	// These are already included in the Pawn class
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class UStaticMeshComponent* baseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class UStaticMeshComponent* turretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class USceneComponent* projectileSpawn;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<class AProjectile> projectileClass;
};
