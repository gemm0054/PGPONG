#include "PongBall.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PongGoal.h"
#include "Paddle.h"
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
    Sphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    Sphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
    Sphere->SetNotifyRigidBodyCollision(true);
    Sphere->SetEnableGravity(false);

    // Create and attach the static mesh
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMesh->SetupAttachment(Sphere);
    
    static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMeshAsset(TEXT("StaticMesh'/Game/Path/To/Your/BallMesh.BallMesh'"));
    if (BallMeshAsset.Succeeded())
    {
        StaticMesh->SetStaticMesh(BallMeshAsset.Object);
    }

    // Set up the projectile movement component
    ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    ProjectileMovement->SetUpdatedComponent(Sphere);
    ProjectileMovement->InitialSpeed = ConstantForwardSpeed;
    ProjectileMovement->MaxSpeed = 1000.0f;
    ProjectileMovement->bShouldBounce = true;
    ProjectileMovement->Bounciness = 0.8f;
    ProjectileMovement->Friction = 0.0f;
    ProjectileMovement->ProjectileGravityScale = 0.0f;

    // Set the initial forward direction
    ForwardDirection = FVector(1.0f, 1.0f, 0.0f).GetSafeNormal();

    // Initialize flags
    bHasScored = false;
    bIsColliding = false;
}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
    Super::BeginPlay();

    Tags.Add(FName("Ball"));

    // Set the initial velocity to zero
    ProjectileMovement->Velocity = FVector::ZeroVector;  // Ensure the ball starts stationary

    // Set a timer to start movement after 3 seconds
    GetWorld()->GetTimerManager().SetTimer(CollisionCooldownHandle, this, &APongBall::StartMovement, 3.0f, false);
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    // Maintain constant forward velocity only if movement has started
    if (ProjectileMovement->Velocity.Size() > 0)
    {
        Sphere->SetPhysicsLinearVelocity(ForwardDirection * ConstantForwardSpeed);
    }
}

// Function to start the ball movement
void APongBall::StartMovement()
{
    // Set the initial velocity for the ball to start moving
    ProjectileMovement->Velocity = ForwardDirection * ProjectileMovement->InitialSpeed;
    UE_LOG(LogTemp, Warning, TEXT("Ball movement started after delay."));
}

// Function to handle collisions
void APongBall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if (bIsColliding)
        return;

    if (OtherActor && OtherActor->IsA(APaddle::StaticClass()))
    {
        FVector PaddleForwardDirection = OtherActor->GetActorForwardVector();
        float DirectionCheck = FVector::DotProduct(ForwardDirection, PaddleForwardDirection);

        if (DirectionCheck < 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("Ball hit the paddle in the opposite direction!"));
        
            // Reverse direction
            ForwardDirection.X *= -1;

            // Increase speed by a fixed amount
            ProjectileMovement->InitialSpeed += 50.0f;
            ProjectileMovement->MaxSpeed = ProjectileMovement->InitialSpeed; // Ensure max speed is updated
            ProjectileMovement->Velocity = ForwardDirection * ProjectileMovement->InitialSpeed;

            bIsColliding = true;
            GetWorld()->GetTimerManager().SetTimer(CollisionCooldownHandle, this, &APongBall::ResetCollisionFlag, 0.1f, false);
        }
    }
    else if (OtherActor && OtherActor->IsA(APongWalls::StaticClass()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Ball hit a wall!"));
        bIsColliding = true;
        GetWorld()->GetTimerManager().SetTimer(CollisionCooldownHandle, this, &APongBall::ResetCollisionFlag, 0.1f, false);
    }
    else if (OtherActor && OtherActor->IsA(APongGoal::StaticClass()))
    {
        if (!bHasScored) 
        {
            bHasScored = true; // Prevent multiple scoring
            UE_LOG(LogTemp, Warning, TEXT("Ball hit a goal!"));
            ResetBall();
        }
    }
}

// Function to reset the ball's position and velocity
void APongBall::ResetBall()
{
    UE_LOG(LogTemp, Warning, TEXT("Resetting ball position and direction."));
    SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
    ForwardDirection = (FMath::RandBool() ? FVector(1.0f, 1.0f, 0.0f) : FVector(-1.0f, 1.0f, 0.0f)).GetSafeNormal();
    ProjectileMovement->InitialSpeed = ConstantForwardSpeed;
    ProjectileMovement->MaxSpeed = ConstantForwardSpeed;
    ProjectileMovement->Velocity = ForwardDirection * ProjectileMovement->InitialSpeed;

    bHasScored = false;
    GetWorld()->GetTimerManager().SetTimer(CollisionCooldownHandle, this, &APongBall::StartMovement, 1.0f, false);
}

// Function to reset the collision flag after a brief cooldown
void APongBall::ResetCollisionFlag()
{
    bIsColliding = false;
}
