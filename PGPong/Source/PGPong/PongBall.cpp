#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBall.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PongWalls.h" // Import the wall class header

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

    Sphere->SetConstraintMode(EDOFMode::XZPlane);

    // Create and attach the static mesh
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMesh->SetupAttachment(Sphere);

    // Set up collision events
    Sphere->OnComponentHit.AddDynamic(this, &APongBall::OnHit);
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
    Super::BeginPlay();

    // Generate a random initial direction
    float RandomAngle = FMath::RandRange(0.0f, 360.0f); // Random angle in degrees
    FVector RandomDirection = FRotationMatrix(FRotator(0.0f, RandomAngle, 0.0f)).GetUnitAxis(EAxis::X); // Use X for forward direction

    // Scale the direction by the initial speed
    FVector InitialImpulse = RandomDirection * InitialSpeed;

    // Apply the impulse to the sphere component
    Sphere->AddImpulse(InitialImpulse, NAME_None, true);
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
            // Reflect the velocity based on the hit normal
            FVector HitNormal = Hit.Normal; // Normal of the wall
            FVector ReflectedVelocity = CurrentVelocity - 2 * FVector::DotProduct(CurrentVelocity, HitNormal) * HitNormal;
            
            // Clamp Z component to prevent upward movement
            ReflectedVelocity.Z = 0.0f; 

            // Log the reflected velocity
            UE_LOG(LogTemp, Warning, TEXT("Ball reflected velocity: X=%f Y=%f Z=%f"), ReflectedVelocity.X, ReflectedVelocity.Y, ReflectedVelocity.Z);
            
            // Set the new velocity to the reflected velocity
            Sphere->SetPhysicsLinearVelocity(ReflectedVelocity);
        }
    }
}

