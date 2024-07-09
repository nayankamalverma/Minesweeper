#pragma once

#include "../../header/Gameplay/Board/BoardService.h"

namespace Gameplay
{
	enum class GameResult
	{
		NONE,
		WON,
		LOST
	};

	class GameplayController
	{
		const float max_level_duration = 201.0f;
		const float game_over_time = 11.f;
		float remaining_time;

		GameResult game_result;
		Board::BoardService* board_service;

		bool isTimeOver();
		void beginGameOverTimer();
		void updateRemainingTime();
		void showCredits();
	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void gameWon();
		void gameLost();
		void endGame(GameResult result);
		void restart();

		float getRemainingTime();
		int getMinesCount();
	};
}
