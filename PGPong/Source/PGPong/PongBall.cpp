#include "CoreMinimal.h"
#include "PongBall.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h" // Include for StaticMeshComponent
#include "GameFramework/ProjectileMovementComponent.h"
#include "PongWalls.h" // Import the wall class header
#include "TimerManager.h" // Include for timer functionality

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
    StaticMesh->SetupAttachment(Sphere); // Attach the static mesh to the sphere

    // Optionally set a default static mesh (make sure to replace with your own mesh asset)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMeshAsset(TEXT("StaticMesh'/Game/Path/To/Your/BallMesh.BallMesh'")); // Adjust path as needed
    if (BallMeshAsset.Succeeded())
    {
        StaticMesh->SetStaticMesh(BallMeshAsset.Object); // Set the mesh if found
    }

    // Set the initial speed
    InitialSpeed = 1000.0f; // Adjust this value as needed
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
    Super::BeginPlay();

    // Wait for 1 second before launching the ball
    FTimerHandle LaunchTimerHandle;
    GetWorld()->GetTimerManager().SetTimer(LaunchTimerHandle, [this]()
    {
        // Set a fixed diagonal direction (e.g., launching towards the top right)
        FVector InitialDirection = FVector(1.0f, 1.0f, 0.0f).GetSafeNormal(); // Diagonal direction in X and Y
        FVector InitialImpulse = InitialDirection * InitialSpeed;

        // Log the initial impulse to verify it's correct
        UE_LOG(LogTemp, Warning, TEXT("Initial Impulse: X=%f Y=%f Z=%f"), InitialImpulse.X, InitialImpulse.Y, InitialImpulse.Z);

        // Apply the impulse to the sphere component
        Sphere->AddImpulse(InitialImpulse, NAME_None, true);
    }, 3.0f, false); // 1.0f is the delay in seconds
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Function to handle collision and bounce the ball
void APongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
                      UPrimitiveComponent* OtherComp, FVector NormalImpulse,
                      const FHitResult& Hit)
{
    // Check if the actor we hit is a wall
    if (OtherActor && OtherActor->IsA(APongWalls::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Ball hit a wall!"));

        // Get the current velocity of the ball
        FVector CurrentVelocity = Sphere->GetComponentVelocity();
        UE_LOG(LogTemp, Warning, TEXT("Ball velocity before hit: X=%f Y=%f Z=%f"), CurrentVelocity.X, CurrentVelocity.Y, CurrentVelocity.Z);

        // Only proceed if the ball has some velocity
        if (!CurrentVelocity.IsZero())
        {
            // Calculate the reflection based on the hit normal
            FVector HitNormal = Hit.Normal;

            // Calculate the reflected velocity
            FVector ReflectedVelocity = CurrentVelocity - 2 * FVector::DotProduct(CurrentVelocity, HitNormal) * HitNormal;

            // Clamp Z component to prevent upward movement
            ReflectedVelocity.Z = 0.0f;

            // Maintain the speed of the ball and increase it by 10 units
            ReflectedVelocity = ReflectedVelocity.GetSafeNormal() * (InitialSpeed + 10.0f); // Increment speed by 10 units

            // Log the reflected velocity
            UE_LOG(LogTemp, Warning, TEXT("Ball reflected velocity: X=%f Y=%f Z=%f"), ReflectedVelocity.X, ReflectedVelocity.Y, ReflectedVelocity.Z);

            // Set the new velocity to the reflected velocity
            Sphere->SetPhysicsLinearVelocity(ReflectedVelocity);

            // Update InitialSpeed for the next bounce
            InitialSpeed += 10.0f; // Increase initial speed by 10 for future bounces
        }
    }
}

