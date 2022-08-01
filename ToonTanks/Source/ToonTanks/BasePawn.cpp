// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "Projectile.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	
	// Making the capsule component as root
	RootComponent = capsuleComponent;

	baseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));

	// Attaching the base mesh to root/capsule
	baseMesh->SetupAttachment(RootComponent);

	turretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));

	// Attaching the turret to base mesh
	turretMesh->SetupAttachment(baseMesh);
	
	projectileSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));

	// Attaching the spawn point to turret mesh
	projectileSpawn->SetupAttachment(turretMesh);
}

void ABasePawn::handleDestruction()
{	
	// Visuals/Sound
	// Visuals
	if (deathParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, deathParticles, GetActorLocation(), GetActorRotation());
		
		// Sound
		if (deathSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, deathSound, GetActorLocation(), GetActorRotation());

			// Camera Animation
			if (deathCameraShakeClass)
			{
				GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(deathCameraShakeClass);
			}
		}
	}
}

void ABasePawn::rotateTurret(FVector targetLocation)
{
	// Getting the object location
	FVector turretLocation = turretMesh->GetComponentLocation();

	FVector toTarget = targetLocation - turretLocation;

	// Converting the vector into rotator
	// Getting only the Yaw rotation, since the turret will only rotate along Yaw
	FRotator targetRotation(0.f, toTarget.Rotation().Yaw, 0.f);
	
	turretMesh->SetWorldRotation(targetRotation);
}

void ABasePawn::fireProjectile()
{
	//// Debugging
	// Drawing a Debug Sphere at the point of collision/contact
	/*DrawDebugSphere(
		GetWorld(),
		projectileSpawn->GetComponentLocation(),
		16.f,
		16,
		FColor::Red,
		false,
		10.f
	);*/

	auto projectile = GetWorld()->SpawnActor<AProjectile>(projectileClass, projectileSpawn->GetComponentLocation(), projectileSpawn->GetComponentRotation());
	// Setting the tank/turret as the owner
	projectile->SetOwner(this);
}
