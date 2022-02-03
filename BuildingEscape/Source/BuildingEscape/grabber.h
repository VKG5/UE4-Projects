// Copyright Lumi_V

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API Ugrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ugrabber();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	// Value in centimeters (cm)
	float reach = 100.f;
	bool debugLineFlag = false;

	// To ensure no issues if unassigned, we use nullptr
	UPhysicsHandleComponent* physicsHandle = nullptr;
	UInputComponent* inputComponent = nullptr;

	// Custom functions
	void Grab();
	void Release();
	void physicsComponentCheck();
	void inputComponentCheck();

	// If we want to draw the Debug Line
	void drawDebugLineStart();
	void drawDebugLineStop();

	// Getting the object that is hit
	FHitResult getHitResult() const;
};
