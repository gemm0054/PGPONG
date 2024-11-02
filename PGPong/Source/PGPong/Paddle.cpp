#include "Paddle.h"
#include "GameFramework/PlayerController.h"
#include "Components/InputComponent.h" // For input handling

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

	// Bind input for paddle movement
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		InputComponent = NewObject<UInputComponent>(this);
		InputComponent->RegisterComponent();
		InputComponent->BindAxis("MovePaddle", this, &APaddle::MovePaddle);
		PlayerController->PushInputComponent(InputComponent);
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
	// Calculate the movement based on input value, speed, and DeltaTime
	FVector NewLocation = GetActorLocation();
	NewLocation.Y += Value * MovementSpeed * GetWorld()->GetDeltaSeconds();

	// Clamp the paddle's Y location to stay within bounds
	NewLocation.Y = FMath::Clamp(NewLocation.Y, -500.0f, 500.0f); // Adjust bounds as needed

	SetActorLocation(NewLocation);
}
