#include "AIPaddle.h"

#include "EngineUtils.h"
#include "GameFramework/Actor.h"  // For actor properties
#include "Engine/World.h"

// Sets default values
AAIPaddle::AAIPaddle()
{
	PrimaryActorTick.bCanEverTick = true;
	bIsAIControlled = true;  // This paddle is AI-controlled, so no player input is needed
}

// Called every frame
void AAIPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BallActor)
	{
		if (!BallActor)
		{
			UE_LOG(LogTemp, Warning, TEXT("BallActor is not set!"));
			return; // Early exit if no ball is found
		}

		FVector CurrentLocation = GetActorLocation();
		float BallY = BallActor->GetActorLocation().Y;
		

		float NewY = FMath::FInterpTo(CurrentLocation.Y, BallY, DeltaTime, AISpeedMultiplier);
		CurrentLocation.Y = FMath::Clamp(NewY, -500.0f, 500.0f); // Adjust bounds as necessary
		SetActorLocation(CurrentLocation);
	}
	else
	{
		for (TActorIterator<AActor> It(GetWorld()); It; ++It)
		{
			if (It->ActorHasTag("Ball")) 
			{
				BallActor = *It;
				UE_LOG(LogTemp, Warning, TEXT("Ball found!"));
				break;
			}
		}
	}
}


// Function to move the AI paddle towards the ball’s Y position
void AAIPaddle::MoveTowardsBall(float DeltaTime)
{
	if (!BallActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("BallActor is not set!"));
		return; // Early exit if no ball is found
	}

	FVector CurrentLocation = GetActorLocation();
	float BallY = BallActor->GetActorLocation().Y;

	// Log the positions for debugging
	UE_LOG(LogTemp, Warning, TEXT("Current Paddle Y: %f, Ball Y: %f"), CurrentLocation.Y, BallY);

	float NewY = FMath::FInterpTo(CurrentLocation.Y, BallY, DeltaTime, AISpeedMultiplier);
	CurrentLocation.Y = FMath::Clamp(NewY, -500.0f, 500.0f); // Adjust bounds as necessary
	SetActorLocation(CurrentLocation);
}

