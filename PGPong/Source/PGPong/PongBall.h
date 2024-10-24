// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PongBall.generated.h"
class UBoxComponent;
UCLASS()
class PGPONG_API APongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sphere")
	float BallSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sphere")
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sphere")
	UBoxComponent* BallHitBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sphere")
	uint8 gameEnd:1;

	FVector BallSpeedVector;
	void ResetBall();
	void start();
	void stop();

	UFUNCTION()
	void paddleCollision(AActor* overlappedActor, AActor* otherActor);
	private:
	float startingSpeed;
};
