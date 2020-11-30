// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Learning_Project_1HUD.generated.h"

UCLASS()
class ALearning_Project_1HUD : public AHUD
{
	GENERATED_BODY()

public:
	ALearning_Project_1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

