#include "AIPaddle.h"
#include "PongBall.h" // Include your ball class
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h" // Include this for GetWorld()

// Sets default values
AAIPaddle::AAIPaddle()
{
	PrimaryActorTick.bCanEverTick = true;
	FollowSpeed = 500.0f; // Adjust the speed as necessary
}

// Called when the game starts or when spawned
void AAIPaddle::BeginPlay()
{
	Super::BeginPlay();

	// Find the ball in the world
	Ball = UGameplayStatics::GetActorOfClass(GetWorld(), APongBall::StaticClass());
	if (Ball)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Paddle found the ball at location: %s"), *Ball->GetActorLocation().ToString());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AI Paddle could not find the ball!"));
	}
}

// Called every frame
void AAIPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Ball)
	{
		// Get the ball's position
		FVector BallLocation = Ball->GetActorLocation();
        
		// Move towards the ball's vertical position
		FVector NewLocation = GetActorLocation();
		NewLocation.Z = FMath::FInterpTo(NewLocation.Z, BallLocation.Z, DeltaTime, FollowSpeed);
        
		// Set the new location for the paddle
		SetActorLocation(NewLocation);

		// Debug log to see the paddle's movement
		UE_LOG(LogTemp, Warning, TEXT("AI Paddle moving to Z: %f"), NewLocation.Z);
	}
}
