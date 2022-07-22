// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"
#include "Kismet/GameplayStatics.h"
#include "toonTanksGameMode.h"

// Sets default values for this component's properties
UHealth::UHealth()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealth::BeginPlay()
{
	Super::BeginPlay();

	// ...
	health = maxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealth::damageTaken);

	toonTanksGameMode = Cast<AtoonTanksGameMode>(UGameplayStatics::GetGameMode(this));
}

void UHealth::damageTaken(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigator, AActor* damageCauser)
{
	// Reduce health
	health -= damage;

	if (health <= 0.f)
	{
		if (toonTanksGameMode)
		{
			toonTanksGameMode->actorDied(damagedActor);
		}
	}
	
	// Debugging
	UE_LOG(LogTemp, Warning, TEXT("Damage Taken by actor %s, Health : %f"), *damagedActor->GetName(), health);
}


// Called every frame
void UHealth::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

