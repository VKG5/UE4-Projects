// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Constructor for extra components
ATank::ATank()
{
	// Setting up the spring arm component
	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	// Attaching the spring arm to root
	springArmComp->SetupAttachment(RootComponent);

	// Setting up the camera component
	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	// Attaching Camera to spring arm
	cameraComp->SetupAttachment(springArmComp);
}

void ATank::handleDestruction()
{
	Super::handleDestruction();

	// Hiding the tank instead of destroying it
	SetActorHiddenInGame(true);
	// Will stop reading it every frame
	SetActorTickEnabled(false);
}

APlayerController* ATank::getPlayerController() const
{
	return tankPlayerController;
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Checking if PlayerController if valid
	if (tankPlayerController)
	{
		FHitResult hitResult;
		// Specifying Visibility channel used for checking hit (ECC - ECollisionChannel
		tankPlayerController->GetHitResultUnderCursor (
			ECollisionChannel::ECC_Visibility,
			false,
			hitResult
		);

		//// Debugging
		// Drawing a Debug Sphere at the point of collision/contact
		/*DrawDebugSphere(
			GetWorld(),
			hitResult.ImpactPoint,
			8.f,
			16,
			FColor::Red,
			false,
			-1.f
		);*/

		rotateTurret(hitResult.ImpactPoint);
	}
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();

	tankPlayerController = Cast<APlayerController>(GetController());
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Binding the player input to some function
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);

	// Binding player action to function
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::fireProjectile);
}

void ATank::Move(float Value)
{	
	// Debugging
	//UE_LOG(LogTemp, Warning, TEXT("The passed value is : %f"), Value);

	// Getting location
	FVector DeltaLocation(0.f);

	// X = Value * DeltaTime * SpeedFactor
	DeltaLocation.X = Value * tankSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalOffset(DeltaLocation, true);
}

void ATank::Turn(float Value)
{
	FRotator DeltaRotation(0.f);
	// Yaw = Value * DeltaTime * TurnFactor
	DeltaRotation.Yaw = Value * turnSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalRotation(DeltaRotation);
}