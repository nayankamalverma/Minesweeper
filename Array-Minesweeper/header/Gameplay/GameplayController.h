#pragma once

#include "../../header/Gameplay/Board/BoardService.h"

namespace Gameplay
{
	class GameplayController
	{
		const float max_level_duration = 301.0f;
		float remaining_time;

		Board::BoardService* board_service;

		void updateRemainingTime();
	public:
		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();

		void restart();

		float getRemainingTime();
		int getMinesCount();
	};
}
