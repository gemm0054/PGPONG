// PongBall.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

	// Ball static mesh component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ball")
	UStaticMeshComponent* StaticMesh;

	// Ball collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ball")
	class USphereComponent* Sphere;

	// Initial speed of the ball
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float InitialSpeed = 750.0f;
	

	// Ball bounce function
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, 
			   UPrimitiveComponent* OtherComp, FVector NormalImpulse, 
			   const FHitResult& Hit);
};
