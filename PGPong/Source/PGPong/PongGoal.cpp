#include "PongGoal.h"
#include "Components/BoxComponent.h"
#include "PongBall.h"
#include "PongGameState.h" // Assuming you have a GameState class for scoring

// Sets default values
APongGoal::APongGoal()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create and configure the box component
	GoalBox = CreateDefaultSubobject<UBoxComponent>(TEXT("GoalBox"));
	RootComponent = GoalBox;
	GoalBox->SetCollisionProfileName(TEXT("PhysicsActor")); // Ensure it can collide with the ball

	// Bind the hit event
	GoalBox->OnComponentHit.AddDynamic(this, &APongGoal::OnBallHit);
}

// Called when the game starts or when spawned
void APongGoal::BeginPlay()
{
	Super::BeginPlay();
}

// Function to handle the ball's collision

void APongGoal::OnBallHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
						  UPrimitiveComponent* OtherComp, FVector NormalImpulse,
						  const FHitResult& Hit)
{
	
	// Check if the OtherActor is valid and is of type APongBall
	if (OtherActor && OtherActor->IsA(APongBall::StaticClass()))
	{
		// Determine which goal was hit and update the score
		APongGameState* GameState = Cast<APongGameState>(GetWorld()->GetGameState());
		if (GameState)
		{
			// Assuming you have separate goals for each player
			if (GetActorLocation().X < 0) // Left goal
			{
				GameState->AddScore(0); // Add a point to player 2's score
				UE_LOG(LogTemp, Warning, TEXT("Player 2 scored! Current Score: %d"), GameState->GetScore(1));
			}
			else // Right goal
			{
				GameState->AddScore(1); // Add a point to player 1's score
				UE_LOG(LogTemp, Warning, TEXT("Player 1 scored! Current Score: %d"), GameState->GetScore(0));
			}

			// Optionally, reset the ball position or any other logic here
		}
	} 
}
