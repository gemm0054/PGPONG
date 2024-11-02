#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongGoal.generated.h"

class UBoxComponent; // Forward declaration

UCLASS()
class PGPONG_API APongGoal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APongGoal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Box component for collision
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* GoalBox;

	// Function to handle the ball's collision
	UFUNCTION()
	void OnBallHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
				   UPrimitiveComponent* OtherComp, FVector NormalImpulse,
				   const FHitResult& Hit);
};
