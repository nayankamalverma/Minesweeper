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
		public:
			static const int number_of_rows = 9;
			static const int number_of_colums = 9;
			static const int mines_count = 8;

			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();


			int getMinesCount();
			
			void reset();

		private:

			BoardView* board_view;
			CellController* board[number_of_rows][number_of_colums];

			void createBoard();
			void initializeCells();
			void resetBoard();
			void deleteBoard();
			void destroy();

		};
	}
}
