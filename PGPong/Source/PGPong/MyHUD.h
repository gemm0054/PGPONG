// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

UCLASS()
class PGPONG_API APongHUD : public AHUD
{
	GENERATED_BODY()

public:
	// Override the DrawHUD function to display the score
	virtual void DrawHUD() override;

	// Function to set the score
	void SetScore(int Player1Score, int Player2Score);

private:
	// Variables to hold scores
	int Player1Score;
	int Player2Score;
};
