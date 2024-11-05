#include "PongWalls.h"

// Sets default values
APongWalls::APongWalls()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(StaticMesh);

	// Configure collision settings
	Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Box->SetCollisionResponseToAllChannels(ECR_Block);
	Box->SetNotifyRigidBodyCollision(true);
	Box->SetCollisionProfileName(TEXT("WallProfile"));
}

// Called when the game starts or when spawned
void APongWalls::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APongWalls::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
