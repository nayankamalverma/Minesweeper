#pragma once			   
#include <random>
#include "../Cell/CellController.h"
#include "../../header/UI/UIElement/ButtonView.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;
		class BoardView;

		enum class BoardState
		{
			FIRST_CELL,     // The state when the player opens first cell.
			PLAYING,        // The game is in progress.
			COMPLETED,      // The game is over.
		};

		class BoardController
		{

		public:
			static const int number_of_rows = 9;
			static const int number_of_colums = 9;
			static const int mines_count = 8;

		private:

			std::default_random_engine random_engine;

			// To give random seed to generator.
			std::random_device random_device;

			BoardView* board_view;
			CellController* board[number_of_rows][number_of_colums];

			int flagged_cells;
			BoardState board_state;

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
			void populateBoard(sf::Vector2i cell_position);
			void populateMines(sf::Vector2i cell_position);
			void populateCells();
			int countMinesAround(sf::Vector2i cell_position);
			bool isValidCellPosition(sf::Vector2i cell_position);

			void processCellInput(Cell::CellController* cell_controller, UI::UIElement::ButtonType button_type);

			int getMinesCount();
			BoardState getBoardState();
			void  setBoardState(BoardState state);

			void reset();
		};
	}
}
