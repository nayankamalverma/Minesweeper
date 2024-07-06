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
			static const int number_of_rows = 9;
			static const int number_of_colums = 9;
			static const int mines_count = 8;

			BoardView* board_view;
			CellController* cell_controller;

			void createBoard();
			void initializeCells();
			void destroy();
			void resetBoard();
			void deleteBoard();

		public:

			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();
			
			void reset();
		};
	}
}
