// Copyright Lumi_V

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "doorControl.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UdoorControl : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UdoorControl();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float currentYaw;
	float initialYaw;

	// Declaring function(s)
	void openDoor(float);
	void closeDoor(float);
	float totalMassOfActors() const;
	void getAudioComponent();
	void checkPressurePlate();
	void findPressurePlate();

	UPROPERTY(EditAnywhere)
	// Giving default value
	float targetYaw = 90.f;

	// Door Properties
	// To keep a timestamp for further use
	float doorLastOpenTime = 0.f;

	// To define Door Delay Speed
	UPROPERTY(EditAnywhere)
	float doorDelayTime = 1.f;

	// To define Door Close Speed
	UPROPERTY(EditAnywhere)
	float doorCloseSpeed = 5.f;

	// To define Door Open Speed
	UPROPERTY(EditAnywhere)
	float doorOpenSpeed = 2.f;
	
	// Actors
	// Getting the Trigger Volume
	UPROPERTY(EditAnywhere)
	ATriggerVolume* doorPressurePlate = nullptr;

	UPROPERTY()
	UAudioComponent* audioComponent = nullptr;
	
	UPROPERTY(EditAnywhere)
	float maxMassRequired = 10.f;
};
