// Fill out your copyright notice in the Description page of Project Settings.


#include "PongWalls.h"

#include "Preferences/PersonaOptions.h"

// Sets default values
APongWalls::APongWalls()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment((StaticMesh));
	//Box->SetBoxExtent(FVector(10,10,10));
	//Box->SetCollisionProfileName(TEXT("WallProfile"));

	Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Box->SetCollisionResponseToAllChannels(ECR_Block);
	Box->SetNotifyRigidBodyCollision(true);

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

