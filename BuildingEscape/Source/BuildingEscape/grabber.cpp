// Copyright Lumi_V

#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "grabber.h"

// Does nothing, just to mark OUT-PARAMETERS (Passed by reference)
#define OUT

// Sets default values for this component's properties
Ugrabber::Ugrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Ugrabber::BeginPlay()
{
	Super::BeginPlay();

	// Debugging
	//UE_LOG(LogTemp, Warning, TEXT("HELLO THERE, GRABBER HERE!"));

	// Checking for Physics Handle Component
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	// Checking if nullptr or not
	// If nullptr then throw an error
	if (!physicsHandle)
	{
		UE_LOG(LogTemp, Error, TEXT("Physics Handle Component missing from the actor : %s"), *GetOwner()->GetName());
	}

	// Checking for input component, otherwise throw error
	if (inputComponent)
	{
		// Checking for Key Press
		inputComponent->BindAction("Grab", IE_Pressed, this, &Ugrabber::Grab);

		// Checking for Key Release
		inputComponent->BindAction("Grab", IE_Released, this, &Ugrabber::Release);
	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input Component missing from the actor : %s"), *GetOwner()->GetName());
	}
}

void Ugrabber::Grab()
{
	// Debugging
	UE_LOG(LogTemp, Warning, TEXT("Grabber function called!"));
}

void Ugrabber::Release()
{
	// Debugging
	UE_LOG(LogTemp, Warning, TEXT("Grabber function released!"));
}

// Called every frame
void Ugrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Get Players Viewpoint
	FVector playerViewPointLoc;
	FRotator playerViewPointRot;

	// Uses reference passing
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLoc, 
		OUT playerViewPointRot
	);
	
	// Debugging 
	/*UE_LOG(LogTemp, Warning, TEXT("Player View Point Location : %s \nRotation : %s"), 
		*playerViewPointLoc.ToString(), 
		*playerViewPointRot.ToString()
	);*/
	
	// Ray Cast out to a certain distance (Reach)
	// Draw a line from player showing reach (A fixed length) - Debug Line
	FVector lineEnd = playerViewPointLoc + playerViewPointRot.Vector()*reach;

	DrawDebugLine(
		GetWorld(),
		playerViewPointLoc,
		lineEnd,
		FColor(0, 255, 0),
		false,
		0.f,
		0,
		2.5f
	);

	FHitResult hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		OUT hit,
		playerViewPointLoc,
		lineEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* actorHit = hit.GetActor();

	// If the actor has hit something, only then print
	// Check what it hits
	if (actorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("The actor that was hit is : %s"), *(actorHit->GetName()));
	}
}

