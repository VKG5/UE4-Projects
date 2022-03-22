// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"
#include "Components/CapsuleComponent.h"

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

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

