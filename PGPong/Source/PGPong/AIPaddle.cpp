#include "AIPaddle.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"

// Sets default values
AAIPaddle::AAIPaddle()
{
	PrimaryActorTick.bCanEverTick = true;
	// This paddle is AI-controlled, so no player input is needed
	bIsAIControlled = true; 
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

		//Get ball location
		FVector CurrentLocation = GetActorLocation();
		float BallY = BallActor->GetActorLocation().Y;
		
		//Move towards the balls y location
		float NewY = FMath::FInterpTo(CurrentLocation.Y, BallY, DeltaTime, AISpeedMultiplier);
		CurrentLocation.Y = FMath::Clamp(NewY, -500.0f, 500.0f);
		SetActorLocation(CurrentLocation);
	}
	else
	{
		//Follow the ball
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
