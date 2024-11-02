// PongBall.cpp

#include "PongBall.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PongGoal.h"
#include "PongGameState.h"
#include "Paddle.h" // Import your paddle class
#include "PongWalls.h"
#include "TimerManager.h"

// Sets default values
APongBall::APongBall()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create and configure the sphere collision component as the root component
    Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    RootComponent = Sphere;
    Sphere->SetCollisionProfileName(TEXT("PhysicsActor"));
    Sphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    Sphere->SetCollisionResponseToAllChannels(ECR_Block);
    Sphere->SetNotifyRigidBodyCollision(true);
    Sphere->SetSimulatePhysics(true);

    // Create and attach the static mesh
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMesh->SetupAttachment(Sphere);

    // Optionally set a default static mesh (replace with your own mesh asset)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMeshAsset(TEXT("StaticMesh'/Game/Path/To/Your/BallMesh.BallMesh'")); // Adjust path as needed
    if (BallMeshAsset.Succeeded())
    {
        StaticMesh->SetStaticMesh(BallMeshAsset.Object); // Set the mesh if found
    }

    // Set the initial direction and constant speed
    ForwardDirection = FVector(1.0f, 1.0f, 0.0f).GetSafeNormal(); // Initial forward direction
    ConstantForwardSpeed = 1000.0f; // Adjust this value as needed
    MinimumSpeed = 300.0f; // Set a minimum speed
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
    Super::BeginPlay();

    // Start the ball movement after a 3-second delay
    GetWorld()->GetTimerManager().SetTimer(StartMovementHandle, this, &APongBall::StartMovement, 3.0f, false);
}

// Function to start the ball movement
void APongBall::StartMovement()
{
    // Enable movement by setting an initial velocity
    Sphere->SetPhysicsLinearVelocity(ForwardDirection * ConstantForwardSpeed);
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Maintain constant forward velocity
    // Only update the velocity if the ball has started moving
    if (Sphere->GetComponentVelocity().Size() > 0)
    {
        Sphere->SetPhysicsLinearVelocity(ForwardDirection * ConstantForwardSpeed);
    }
}

// Function to handle collisions
void APongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
                      UPrimitiveComponent* OtherComp, FVector NormalImpulse,
                      const FHitResult& Hit)
{
    if (!bCanCollide)
    {
        return;
    }

    // Temporarily disable collisions
    bCanCollide = false;
    GetWorld()->GetTimerManager().SetTimer(CollisionCooldownHandle, this, &APongBall::ResetCollision, 0.1f, false);

    // Log the current velocity before changing direction
    FVector CurrentVelocity = Sphere->GetComponentVelocity();

    if (OtherActor && OtherActor->IsA(APaddle::StaticClass()))
    {
        FVector PaddleForwardDirection = OtherActor->GetActorForwardVector();
        
        // Calculate the dot product to check direction
        float DirectionCheck = FVector::DotProduct(ForwardDirection, PaddleForwardDirection);

        if (DirectionCheck < 0) // The paddle is moving in the opposite direction
        {
            UE_LOG(LogTemp, Warning, TEXT("Ball hit the paddle in the opposite direction!"));

            // Reverse only the horizontal direction (X)
            ForwardDirection.X *= -1; // Reverse the X component of the direction
        }
    }
    else if (OtherActor && OtherActor->IsA(APongWalls::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Ball hit a wall!"));
        // Reverse direction on wall hit (for vertical walls)
        ForwardDirection.Y *= -1; // Reverse direction on wall hit
    }
    else if (OtherActor && OtherActor->IsA(APongGoal::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Ball hit a goal!"));

        // Handle scoring logic here
        APongGoal* Goal = Cast<APongGoal>(OtherActor);
        if (Goal)
        {
            // Assuming the goal's position determines the scoring player
            APongGameState* GameState = Cast<APongGameState>(GetWorld()->GetGameState());
            if (GameState)
            {
                // Update score based on which goal was hit
                if (Goal->GetActorLocation().X < 0) // Left goal
                {
                    GameState->AddScore(1, 1); // Player 2 scores
                    UE_LOG(LogTemp, Warning, TEXT("Player 2 scored! Current Score: %d"), GameState->GetScore(1));
                }
                else // Right goal
                {
                    GameState->AddScore(0, 1); // Player 1 scores
                    UE_LOG(LogTemp, Warning, TEXT("Player 1 scored! Current Score: %d"), GameState->GetScore(0));
                }
            }

            // Reset the ball after a goal
            ResetBall();
        }
    }

    // Maintain constant speed
    Sphere->SetPhysicsLinearVelocity(ForwardDirection * ConstantForwardSpeed);

    // Log the new velocity to verify
    UE_LOG(LogTemp, Warning, TEXT("New velocity after hit: X=%f Y=%f Z=%f"), Sphere->GetComponentVelocity().X, Sphere->GetComponentVelocity().Y, Sphere->GetComponentVelocity().Z);
}

// Function to reset the ball's position and velocity
void APongBall::ResetBall()
{
    // Reset position to the center of the play area (adjust as necessary)
    SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
    
    // Reset the forward direction to the initial direction
    ForwardDirection = FVector(1.0f, 1.0f, 0.0f).GetSafeNormal(); // Reset to initial forward direction
    
    // Set the initial velocity
    Sphere->SetPhysicsLinearVelocity(ForwardDirection * ConstantForwardSpeed);
    
    // Optionally, you can add a small delay before starting the movement again
    GetWorld()->GetTimerManager().SetTimer(StartMovementHandle, this, &APongBall::StartMovement, 1.0f, false); // Start movement after a 1-second delay
}

// Resets the collision flag after a short cooldown
void APongBall::ResetCollision()
{
    bCanCollide = true;
}
