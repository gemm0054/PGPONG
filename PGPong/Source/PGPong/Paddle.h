#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h" // For StaticMeshComponent
#include "Paddle.generated.h"

UCLASS()
class PGPONG_API APaddle : public AActor
{
	GENERATED_BODY()
    
public:    
	// Sets default values for this actor's properties
	APaddle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:    
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Paddle movement function
	void MovePaddle(float Value);

private:
	// Paddle mesh component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PaddleMesh;

	// Paddle movement speed
	UPROPERTY(EditAnywhere, Category="Movement")
	float MovementSpeed = 1000.0f;
};
