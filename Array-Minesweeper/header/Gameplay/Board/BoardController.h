#pragma once
#include "BoardView.h"				   
#include "../Cell/CellController.h"
#include "../../header/UI/UIElement/ButtonView.h"

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

		private:

			BoardView* board_view;
			CellController* board[number_of_rows][number_of_colums];

			int flagged_cells;

			void createBoard();
			void initializeCells();
			void resetBoard();
			void deleteBoard();

			void destroy();

		public:
			BoardController();
			~BoardController();

			void initialize();
			void update();
			void render();

			void openCell(sf::Vector2i cell_position);
			void flagCell(sf::Vector2i cell_position);
			void processCellInput(Cell::CellController* cell_controller, UI::UIElement::ButtonType button_type);

			int getMinesCount();

			void reset();
		};
	}
}
