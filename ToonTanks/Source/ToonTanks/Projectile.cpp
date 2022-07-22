// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	baseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));

	// Setting the root component
	RootComponent = baseMesh;

	// Movement Component, this will move the projectile across the world
	projectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement Component"));
	projectileMovementComponent->MaxSpeed = 1300.f;
	projectileMovementComponent->InitialSpeed = 1000.f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// Bounding to delegate
	baseMesh->OnComponentHit.AddDynamic(this, &AProjectile::onHit);
}

void AProjectile::onHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit)
{
	//// Debugging
	//UE_LOG(LogTemp, Warning, TEXT("On Hit Event"));
	//UE_LOG(LogTemp, Warning, TEXT("\nHitComp : %s\nOtherActor : %s\nOtherComp : %s"), *hitComp->GetName(), *otherActor->GetName(), *otherComp->GetName());
	
	// Get the owner
	auto myOwner = GetOwner();

	if (myOwner == nullptr) return;

	auto myOwnerInstigator = myOwner->GetInstigatorController();
	auto damageTypeClass = UDamageType::StaticClass();

	// Checking validity of hit actor, hit actor is not the parent or owner
	if (otherActor && otherActor != this && otherActor != myOwner)
	{
		UGameplayStatics::ApplyDamage(otherActor, damage, myOwnerInstigator, this, damageTypeClass);
		// Destroying the projectile
		Destroy();
	}

	// If we hit own actor or actor hit is invalid, destroy the projectile
	else Destroy();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

