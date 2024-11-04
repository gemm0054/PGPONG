#include "MyHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"

//Function to draw the hud for the scoreboard
void APongHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw the score on the screen
	FVector2D ScreenSize = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	FVector2D ScorePosition = FVector2D(ScreenSize.X * 0.5f, 50); // Centered horizontally at the top

	// Setting the TEXT
	FString ScoreText = FString::Printf(TEXT("Player 1: %d | Player 2: %d"), Player1Score, Player2Score);
	DrawText(ScoreText, FColor::White, ScorePosition.X, ScorePosition.Y, nullptr, 1.5f);
}

// Function to set the score to keep everything updated
void APongHUD::SetScore(int NewPlayer1Score, int NewPlayer2Score)
{
	Player1Score = NewPlayer1Score;
	Player2Score = NewPlayer2Score;
}
