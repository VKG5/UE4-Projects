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

	// ...
	UE_LOG(LogTemp, Warning, TEXT("HELLO THERE, GRABBER HERE!"));
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

	// Check what it hits
}

