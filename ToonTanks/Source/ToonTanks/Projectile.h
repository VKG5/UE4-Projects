// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

// Forward Declaring
class USoundBase;

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class UStaticMeshComponent* baseMesh;

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	class UProjectileMovementComponent* projectileMovementComponent;

	// Callback function
	UFUNCTION()
	void onHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);
	
	UPROPERTY(EditAnywhere)
	float damage = 50.f;

	UPROPERTY(EditAnywhere, Category = "Components")
	class UParticleSystem* hitParticles;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UParticleSystemComponent* trailParticles;

	UPROPERTY(EditAnywhere, Category = "Components")
	USoundBase* launchSound;

	UPROPERTY(EditAnywhere, Category = "Components")
	USoundBase* hitSound;

	UPROPERTY(EditAnywhere, Category = "Components")
	TSubclassOf<class UCameraShakeBase> hitCameraShakeClass;
};
