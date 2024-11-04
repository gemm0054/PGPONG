#pragma once

#include "CoreMinimal.h"
#include "Paddle.h"  // Base class for shared functionality
#include "AIPaddle.generated.h"

UCLASS()
class PGPONG_API AAIPaddle : public APaddle
{
	GENERATED_BODY()

public:
	// Sets default values for this AI paddle's properties
	AAIPaddle();

protected:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Reference to the ball, set this in the editor or dynamically find it in BeginPlay
	UPROPERTY(EditAnywhere, Category="AI")
	AActor* BallActor;

	// Speed multiplier for AI paddle movement
	UPROPERTY(EditAnywhere, Category="AI")
	float AISpeedMultiplier = 3.0f;

	// Function to update the paddle's position based on the ball's position
	void MoveTowardsBall(float DeltaTime);
};
