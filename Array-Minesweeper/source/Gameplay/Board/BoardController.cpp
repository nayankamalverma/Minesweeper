#include "../../header/Gameplay/Board/BoardController.h"

namespace Gameplay
{
	namespace Board
	{
		 BoardController::BoardController()
		 {
			 board_view = new BoardView(this);
			 createBoard();
		 }

		BoardController::~BoardController()
		{
			destroy();
		}
		void BoardController::initialize()
		{
			board_view->initialize();
			cell_controller->initialize();
		}
		void BoardController::update()
		{
			board_view->update();
			cell_controller->update();
		}

		void BoardController::render()
		{
			board_view->render();
			cell_controller->render();
		}

		void BoardController::createBoard()
		{
			cell_controller = new CellController();
		}

		void BoardController::deleteBoard()
		{
			delete(cell_controller);
		}
		void BoardController::destroy()
		{
			deleteBoard();
			delete(board_view);
		}

		void BoardController::reset()
		{
			cell_controller->reset();
		}

	}
}
