#pragma once
#include "BoardController.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace UI::UIElement;
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

			void flagAllMines();
			void processCellInput(CellController* cell_controller, ButtonType button_type);
			int getMinesCount();
			BoardState getBoardState();
			void setBoardState(BoardState state);
			void showBoard();
			void resetBoard();
			
		};
	}
}
