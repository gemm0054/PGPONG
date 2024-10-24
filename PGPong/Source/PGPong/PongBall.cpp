// Fill out your copyright notice in the Description page of Project Settings.


#include "PongBall.h"

// Sets default values
APongBall::APongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BallSpeed = 500.0f;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;

	StaticMesh -> SetSimulatePhysics(true);
	StaticMesh -> SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMesh -> SetCollisionObjectType(ECC_PhysicsBody);
	StaticMesh -> SetEnableGravity(false);
	StaticMesh -> SetConstraintMode(EDOFMode::XYPlane);

	StaticMesh -> SetCollisionResponseToAllChannels(ECR_Block);
	StaticMesh -> BodyInstance.bUseCCD = true;
	//StaticMesh -> OnComponentHit.AddDynamic(this, &APongBall::OnActorHit);

	BallHitBox = CreateDefaultSubobject<UBoxComponent>("BallHitBox");
	BallHitBox -> SetupAttachment(StaticMesh);
	BallHitBox -> SetCollisionProfileName("PongBall");
	BallHitBox -> SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BallHitBox -> SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	BallHitBox -> SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));

	gameEnd = false;

}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
	Super::BeginPlay();
	ResetBall();
	startingSpeed = StaticMesh->GetPhysicsLinearVelocity().Size();
	UE_LOG(LogTemp, Warning, TEXT("Initial Speed of the Ball: %f"), startingSpeed);

	//SetReplicateMovement(true);

	OnActorBeginOverlap.AddDynamic(this, &APongBall::APongBall::paddleCollision);
	
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + (BallSpeedVector * BallSpeed * DeltaTime));
}

void APongBall::ResetBall()
{
	SetActorLocation(FVector::ZeroVector);
	StaticMesh -> SetPhysicsLinearVelocity(FVector(FMath::RandRange(-300.0f, 300.0f), (FMath::RandBool() ? 1.f:-1.f)*2000.f, 0.0f));
}

void APongBall::start()
{
	gameEnd = false;

	SetActorLocation(FVector::ZeroVector);
	StaticMesh -> SetPhysicsLinearVelocity(FVector(FMath::RandRange(-300.0f, 300.0f), (FMath::RandBool() ? 1.f:-1.f)*2000.f, 0.0f));
}

void APongBall::stop()
{
	gameEnd = true;
	StaticMesh -> SetPhysicsLinearVelocity(FVector::ZeroVector);
}

void APongBall::paddleCollision(AActor* overlappedActor, AActor* otherActor)
{
	//APongPaddle* PongPaddle = cast<ApongPaddle>(otherActor);
}

