#include "../../header/Gameplay/Board/BoardController.h"
#include "../../header/Gameplay/Board/BoardView.h"
#include "../../header/Gameplay/Cell/CellController.h"

namespace Gameplay
{
	namespace Board
	{
		using namespace Cell;

		BoardController::BoardController()
		{
			board_view = new BoardView(this);
			createBoard();
		}

		BoardController::~BoardController()
		{
			destroy();
		}

		void BoardController::createBoard()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++) 
				{
					board[i][j] = new CellController(sf::Vector2i(i, j));
				}
			}
		}

		void BoardController::initialize()
		{
			board_view->initialize();
			initializeCells();
		}

		void BoardController::initializeCells()
		{
			float cell_width = board_view->getCellWidth();
			float cell_height = board_view->getCellHeight();

			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++)
				{
					board[i][j]->initialize(cell_width, cell_height);
				}
			}
		}
		void BoardController::update()
		{
			board_view->update();
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++)
				{
					board[i][j]->update();
				}
			}
		}

		void BoardController::render()
		{
			board_view->render();
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++)
				{
					board[i][j]->render();
				}
			}
		}

		void BoardController::reset()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++)
				{
					board[i][j]->reset();
				}
			}
		}

		void BoardController::deleteBoard()
		{
			for (int i = 0; i < number_of_rows; i++)
			{
				for (int j = 0; j < number_of_colums; j++)
				{
					delete(board[i][j]);
				}
			}
		}

		void BoardController::destroy()
		{
			deleteBoard();
			delete(board_view);
		}
		void BoardController::resetBoard()
		{
			
		}

	}
}
