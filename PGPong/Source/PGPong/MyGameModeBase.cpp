#include "MyGameModeBase.h"
#include "PongGameState.h"
#include "MyHUD.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraActor.h"

// Called when the game starts or when spawned
void ACustomGameMode::BeginPlay()
{
	Super::BeginPlay();
    
	// Set the fixed camera view
	SetFixedCameraView();

	// Initialize scores
	if (APongGameState* CurrentGameState = GetGameState<APongGameState>())
	{
		CurrentGameState->SetScore(0, 0); // Initialize player scores to 0
	}
}

//Function to set the starting Camera
void ACustomGameMode::SetFixedCameraView()
{
	// Get the player controller
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		// Look for a CameraActor in the level to set as the fixed camera view
		for (TActorIterator<ACameraActor> CameraItr(GetWorld()); CameraItr; ++CameraItr)
		{
			// Use the first CameraActor found in the level
			PC->SetViewTargetWithBlend(*CameraItr, 3.f, EViewTargetBlendFunction::VTBlend_Cubic);
			break; 
		}
	}
}
