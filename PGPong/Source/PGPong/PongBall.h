#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "PongBall.generated.h"

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

	// Function to handle collisions
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
			   UPrimitiveComponent* OtherComp, FVector NormalImpulse,
			   const FHitResult& Hit);

private:
	// Sphere component for collision
	UPROPERTY(VisibleAnywhere)
	USphereComponent* Sphere;
	
	// Initial position of the ball
	FVector InitialPosition;

	// Static mesh component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	// Initial speed and direction
	FVector ForwardDirection; // Stores the initial direction of the ball
	float ConstantForwardSpeed; // The speed to maintain
	float MinimumSpeed; // Minimum speed for the ball

	// Collision flag and timer handle
	bool bCanCollide = true;
	FTimerHandle CollisionCooldownHandle;

	// Timer handle for starting ball movement
	FTimerHandle StartMovementHandle; // Handle for the timer to start movement

	// Function to reset the collision flag
	void ResetCollision();

	void ResetBall();

	// Function to start the ball movement
	void StartMovement(); // Declaration of the function to start movement
};
