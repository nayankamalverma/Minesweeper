#include "../../header/Gameplay/Cell/CellController.h"
#include "../../header/Gameplay/Cell/CellView.h"
#include "../../header/Gameplay/Cell/CellModel.h"


namespace Gameplay
{
	namespace Cell
	{
		CellController::CellController()
		{
			cell_model = new CellModel();
			cell_view = new CellView(this);
		}

		CellController::~CellController()
		{
			destroy();
		}

		void CellController::initialize()
		{
			cell_view->initialize();
		}

		void CellController::update()
		{
			cell_view->update();
		}

		void CellController::render()
		{
			cell_view->render();
		}

		CellValue CellController::getCellValue()
		{
			return cell_model->getCellValue();
		}

		CellState CellController::getCellState()
		{
			return cell_model->getCellState();
		}

		void CellController::destroy()
		{
			delete (cell_view);
			delete(cell_model);
		}

		void CellController::reset()
		{
			cell_model->reset();
		}

	}
}
