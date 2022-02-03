// Copyright Lumi_V

#include "grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"

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

	// Run Initial Checks
	physicsComponentCheck();
	inputComponentCheck();
}

// Custom functions
void Ugrabber::Grab()
{
	// Debugging
	UE_LOG(LogTemp, Warning, TEXT("Grabber function called!"));

	// TOOD Only RayCast when a a certain button is pressed and try and reach any actors with physics body collision channel set
	FHitResult hitActor = getHitResult();
	UPrimitiveComponent* componentToGrab = hitActor.GetComponent();

	// If we hit something then attach physics handle
	// TODO Attach Physics Handle
	// Check if we are hitting an actor
	if(hitActor.GetActor())
	{
		physicsHandle->GrabComponentAtLocation(
			componentToGrab,
			NAME_None,
			getLineEndPoint()
		);
	}
}

void Ugrabber::Release()
{
	// Debugging
	UE_LOG(LogTemp, Warning, TEXT("Grabber function released!"));

	// If we have something in our hand currently
	if (physicsHandle->GetGrabbedComponent())
	{
		// TODO Release Physics Handle
		physicsHandle->ReleaseComponent();
	}
}

void Ugrabber::physicsComponentCheck()
{
	// Physics Handle
	// Checking for Physics Handle Component
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	// Checking if nullptr or not
	// If nullptr then throw an error
	if (!physicsHandle)
	{
		UE_LOG(LogTemp, Error, TEXT("Physics Handle Component missing from the actor : %s"), *GetOwner()->GetName());
	}
}

void Ugrabber::inputComponentCheck()
{
	// Input 
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	// Checking for input component, otherwise throw error
	if (inputComponent)
	{
		// Checking for Key Press
		inputComponent->BindAction("Grab", IE_Pressed, this, &Ugrabber::Grab);
		inputComponent->BindAction("drawDebugLineStart", IE_Pressed, this, &Ugrabber::drawDebugLineStart);
		inputComponent->BindAction("drawDebugLineEnd", IE_Pressed, this, &Ugrabber::drawDebugLineStop);

		// Checking for Key Release
		inputComponent->BindAction("Grab", IE_Released, this, &Ugrabber::Release);
	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Input Component missing from the actor : %s"), *GetOwner()->GetName());
	}
}

void Ugrabber::drawDebugLineStart()
{
	debugLineFlag = true;
}

void Ugrabber::drawDebugLineStop()
{
	debugLineFlag = false;
}

FHitResult Ugrabber::getHitResult()
{
	if (debugLineFlag)
	{
		DrawDebugLine(
			GetWorld(),
			getPlayerPosition(),
			getLineEndPoint(),
			FColor(0, 255, 0),
			true,
			10.f,
			0,
			2.5f
		);
	}

	FHitResult hit;
	FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		OUT hit,
		getPlayerPosition(),
		getLineEndPoint(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParams
	);

	AActor* actorHit = hit.GetActor();

	// Returning
	return hit;
}

FVector Ugrabber::getPlayerPosition()
{
	// TODO Refactor this section
	// Get Players Viewpoint and vector
	FVector playerViewPointLoc;
	FRotator playerViewPointRot;

	// Uses reference passing
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLoc,
		OUT playerViewPointRot
	);

	return playerViewPointLoc;
}

FVector Ugrabber::getLineEndPoint()
{
	// TODO Refactor this section
	// Get Players Viewpoint and vector
	FVector playerViewPointLoc;
	FRotator playerViewPointRot;

	// Uses reference passing
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT playerViewPointLoc,
		OUT playerViewPointRot
	);

	// Ray Cast out to a certain distance (Reach)
	// Draw a line from player showing reach (A fixed length) - Debug Line
	return playerViewPointLoc + playerViewPointRot.Vector() * reach;
}

// Called every frame
void Ugrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// If physics handle is attached
	if (physicsHandle->GrabbedComponent)
	{
		// Move object
		physicsHandle->SetTargetLocation(getLineEndPoint());
	}
}