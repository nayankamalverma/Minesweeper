#include "../../header/Gameplay/Board/BoardService.h"

namespace Gameplay
{
	namespace Board
	{
		BoardService::BoardService()
		{
			board_controller = nullptr;
		}

		BoardService::~BoardService()
		{
			destroy();
		}

		void BoardService::initialize()
		{
			board_controller = new BoardController();
			board_controller->initialize();
		}

		void BoardService::update()
		{
			board_controller->update();
		}
		void BoardService::render()
		{
			board_controller->render();
		}

		void BoardService::flagAllMines()
		{
			board_controller->flagAllMines();
		}


		void BoardService::processCellInput(CellController* cell_controller, ButtonType button_type)
		{
			board_controller->processCellInput(cell_controller, button_type);
		}


		int BoardService::getMinesCount()
		{
			return board_controller->getMinesCount();
		}

		BoardState BoardService::getBoardState()
		{
			return board_controller->getBoardState();
		}
		void BoardService::setBoardState(BoardState state)
		{
			return; board_controller->setBoardState(state);
		}

		void BoardService::showBoard()
		{
			board_controller->showBoard();
		}


		void BoardService::resetBoard()
		{
			board_controller->reset();
		}

		void BoardService::destroy()
		{
			delete(board_controller);
			board_controller = nullptr;
		}
	}
}
