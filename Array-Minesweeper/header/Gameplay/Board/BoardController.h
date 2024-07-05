#pragma once
#include "BoardView.h"

namespace Gameplay
{
	namespace Board
	{
		class BoardController
		{
			static const int number_of_rows = 9;
			static const int number_of_colums = 9;
			static const int mines_count = 8;

			BoardView* board_view;

		public:

			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();
			
			void createBoard();
			void destroy();
			void deleteBoard();
			void reset();
		};
	}
}
