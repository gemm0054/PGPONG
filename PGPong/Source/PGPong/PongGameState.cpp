// PongGameState.cpp

#include "PongGameState.h"

// Constructor
APongGameState::APongGameState()
{
	// Initialize the scores for two players
	Player1Score = 0;
	Player2Score = 0;
}

// Set score function
void APongGameState::SetScore(int32 NewPlayer1Score, int32 NewPlayer2Score)
{
	Player1Score = NewPlayer1Score;
	Player2Score = NewPlayer2Score;

	// Notify HUD or any other relevant system about the score change
	if (APongHUD* HUD = Cast<APongHUD>(GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		HUD->SetScore(Player1Score, Player2Score);
	}
}

// Add score function
void APongGameState::AddScore(int PlayerIndex, int Points)
{
	if (PlayerIndex == 0)
	{
		Player1Score += Points;
	}
	else if (PlayerIndex == 1)
	{
		Player2Score += Points;
	}

	// Update the HUD with the new scores
	if (APongHUD* HUD = Cast<APongHUD>(GetWorld()->GetFirstPlayerController()->GetHUD()))
	{
		HUD->SetScore(Player1Score, Player2Score);
	}
}

// Get score function
int32 APongGameState::GetScore(int32 PlayerIndex) const
{
	if (PlayerIndex == 0)
	{
		return Player1Score;
	}
	else if (PlayerIndex == 1)
	{
		return Player2Score;
	}
	return 0; // Return 0 if the player index is invalid
}
