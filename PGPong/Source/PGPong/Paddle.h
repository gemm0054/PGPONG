#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paddle.generated.h"

UCLASS()
class PGPONG_API APaddle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this paddle's properties
	APaddle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function for paddle movement, called by player input or overridden in derived classes
	virtual void MovePaddle(float Value);

	// Property to control movement speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Paddle")
	float MovementSpeed = 500.0f;

	// Flag to determine if this paddle is controlled by AI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Paddle")
	bool bIsAIControlled = false;

private:
	// Paddle mesh component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PaddleMesh;
};
