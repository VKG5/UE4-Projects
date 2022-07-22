// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public: 
	// Constructor
	ATank();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void handleDestruction();

	// Getter function
	APlayerController* getPlayerController() const;

protected: 
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Creating the camera
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	class UCameraComponent* cameraComp;

	// Creating the spring arm
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	class USpringArmComponent* springArmComp;

	// Speed Factor
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float tankSpeed = 250.f;

	// Speed Factor
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float turnSpeed = 250.f;

	// Move Function 
	void Move(float Value);

	// Turn Function
	void Turn(float Value);

	// Setting up a player componet 
	APlayerController* tankPlayerController;
};