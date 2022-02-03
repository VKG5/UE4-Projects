// Copyright Lumi_V


#include "doorControl.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"

#define OUT

// Sets default values for this component's properties
UdoorControl::UdoorControl()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UdoorControl::BeginPlay()
{
	Super::BeginPlay();

	// ...
	initialYaw = GetOwner()->GetActorRotation().Yaw;
	currentYaw = initialYaw;
	targetYaw += initialYaw;

	// Prevent Nullptr exception 
	if (!doorPressurePlate)
	{
		// Debugging 
		UE_LOG(LogTemp, Error, TEXT("**NULLPTR, please assign a component to the exposed field(s) in actor(s) : %s**"), *GetOwner()->GetName());
	}

	actorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}


// Called every frame
void UdoorControl::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Making the door open on the event trigger
	if ( totalMassOfActors() > maxMassRequired ) 
	{
		openDoor(DeltaTime);

		// Get the timestamp at which the door is completely open 
		doorLastOpenTime = GetWorld()->GetTimeSeconds();
	}

	// Making the door close on exiting the Trigger Volume
	else
	{
		if ( ((GetWorld()->GetTimeSeconds() - doorLastOpenTime) > doorDelayTime) && (totalMassOfActors() < maxMassRequired))
		{
			closeDoor(DeltaTime);
		}
	}

	
}

void UdoorControl::openDoor(float DeltaTime)
{
	// Debugging
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	//UE_LOG(LogTemp, Warning, TEXT("Yaw is : %f"), GetOwner()->GetActorRotation().Yaw);

	currentYaw = FMath::FInterpTo(currentYaw, targetYaw, DeltaTime, doorOpenSpeed);

	FRotator openDoor = GetOwner()->GetActorRotation();

	openDoor.Yaw = currentYaw;

	GetOwner()->SetActorRotation(openDoor);
}

void UdoorControl::closeDoor(float DeltaTime)
{
	// Debugging
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *GetOwner()->GetActorRotation().ToString());
	//UE_LOG(LogTemp, Warning, TEXT("Yaw is : %f"), GetOwner()->GetActorRotation().Yaw);

	currentYaw = FMath::FInterpTo(currentYaw, initialYaw, DeltaTime, doorCloseSpeed);

	FRotator closeDoor = GetOwner()->GetActorRotation();

	closeDoor.Yaw = currentYaw;

	GetOwner()->SetActorRotation(closeDoor);
}

float UdoorControl::totalMassOfActors() const
{
	float totalMass = 0.f;

	// Find all physics objects in the scene, overlapping with the volume
	TArray<AActor*> overlappingActors;

	doorPressurePlate->GetOverlappingActors(
		OUT overlappingActors
	);

	for (auto actor : overlappingActors)
	{
		// Debugging
		//UE_LOG(LogTemp, Warning, TEXT("Actor Found\n"));/

		totalMass += actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}

	// Sum up their total mass

	return totalMass;
}