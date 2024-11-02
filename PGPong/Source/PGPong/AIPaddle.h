#pragma once

#include "CoreMinimal.h"
#include "Paddle.h"
#include "AIPaddle.generated.h"

UCLASS()
class PGPONG_API AAIPaddle : public APaddle
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAIPaddle();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	AActor* Ball; // Reference to the ball
	float FollowSpeed; // Speed at which the paddle follows the ball
};
