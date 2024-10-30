// CustomGameMode.cpp

#include "MyGameModeBase.h"

#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraActor.h"

void ACustomGameMode::BeginPlay()
{
	Super::BeginPlay();
	SetFixedCameraView();
}

void ACustomGameMode::SetFixedCameraView()
{
	// Get the player controller
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		// Look for a CameraActor in the level to set as the fixed camera view
		for (TActorIterator<ACameraActor> CameraItr(GetWorld()); CameraItr; ++CameraItr)
		{
			PC->SetViewTargetWithBlend(*CameraItr, 3.f, EViewTargetBlendFunction::VTBlend_Cubic);
			break; // Use the first CameraActor found in the level
		}
	}
}
