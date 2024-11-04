#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBall.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class APongGoal;
class APongGameState;

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

	// Function to start the ball movement
	void StartMovement();

	// Function to handle collisions
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
			   UPrimitiveComponent* OtherComp, FVector NormalImpulse,
			   const FHitResult& Hit);

	// Function to reset the ball's position and velocity
	void ResetBall();

	void ResetCollisionFlag();

private:
	// Sphere component for collision
	UPROPERTY(VisibleAnywhere)
	USphereComponent* Sphere;

	// Static mesh component for the ball's visual representation
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	// Projectile movement component for handling the ball's movement
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovement;

	// The forward direction of the ball
	FVector ForwardDirection;

	// Speed constants
	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float ConstantForwardSpeed = 500.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float SpeedIncreaseFactor = 1.2f;
	

	// Flags for collision and scoring
	bool bHasScored;
	bool bIsColliding;

	// Timer handle for collision cooldown
	FTimerHandle CollisionCooldownHandle;
};
