// PongGameState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyHUD.h"
#include "PongGameState.generated.h"

UCLASS()
class PGPONG_API APongGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	// Constructor
	APongGameState();

	// Set score function
	void SetScore(int32 Player1Score, int32 Player2Score);

	// Add score function
	void AddScore(int PlayerIndex);

	// Get score function
	int32 GetScore(int32 PlayerIndex) const;

private:
	// Player scores
	int32 Player1Score;
	int32 Player2Score;
};
