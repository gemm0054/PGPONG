#include "Paddle.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h"

// Sets default values
APaddle::APaddle()
{
	PrimaryActorTick.bCanEverTick = true;

	// Initialize paddle mesh
	PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaddleMesh"));
	RootComponent = PaddleMesh;

	// Set collision properties
	PaddleMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	PaddleMesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();

	// Set up input only if this paddle is player-controlled
	if (!bIsAIControlled)
	{
		// Get the player controller
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		if (PlayerController)
		{
			// Setup the input component for player use
			InputComponent = NewObject<UInputComponent>(this);
			InputComponent->RegisterComponent();
			InputComponent->BindAxis("MovePaddle", this, &APaddle::MovePaddle);
			PlayerController->PushInputComponent(InputComponent);
		}
	}
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Move paddle function
void APaddle::MovePaddle(float Value)
{
	// Only move if controlled by player input and not AI movement
	if (!bIsAIControlled)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += Value * MovementSpeed * GetWorld()->GetDeltaSeconds();

		// Clamp the paddle's Y location to stay within bounds
		NewLocation.Y = FMath::Clamp(NewLocation.Y, -500.0f, 500.0f); // Adjust bounds as needed

		SetActorLocation(NewLocation);
	}
}
