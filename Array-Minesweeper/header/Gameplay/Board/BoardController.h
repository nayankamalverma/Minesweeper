#pragma once
#include "BoardView.h"
#include "../Cell/CellController.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;
		class BoardController
		{
			

			BoardView* board_view;
			CellController* cell_controller;

			void createBoard();
			void initializeCells();
			void resetBoard();
			void deleteBoard();
			void destroy();
		public:
			static const int number_of_rows = 9;
			static const int number_of_colums = 9;
			static const int mines_count = 8;

			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();
			
			void reset();
		};
	}
}
