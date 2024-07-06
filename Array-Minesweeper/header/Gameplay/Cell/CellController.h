#pragma once
#include "CellModel.h"

namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellModel;

		class CellController
		{
			CellView* cell_view;
			CellModel* cell_model;

			void destroy();
		public:

			CellController();
			~CellController();

			void initialize();
			void update();
			void render();

			CellValue getCellValue();
			CellState getCellState();

			void reset();
		};
	}
}
