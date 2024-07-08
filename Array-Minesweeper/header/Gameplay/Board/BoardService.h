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

			void processCellInput(CellController* cell_controller, ButtonType button_type);
			int getMinesCount();
			void resetBoard();
			
		};
	}
}
