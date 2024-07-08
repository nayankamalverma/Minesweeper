#pragma once
#include "BoardController.h"

namespace Gameplay
{
	namespace Board
	{
		class BoardService
		{
			BoardController* board_controller;
			void destroy();

		public:
			BoardService();
			~BoardService();

			void initialize();
			void update();
			void render();

			int getMinesCount();
			void resetBoard();
			
		};
	}
}
