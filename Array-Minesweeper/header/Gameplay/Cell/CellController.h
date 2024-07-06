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

			CellController(int cell_index);
			~CellController();

			void initialize(float cell_width, float cell_height);
			void update();
			void render();

			CellValue getCellValue();
			CellState getCellState();

			int getCellIndex();

			void reset();
		};
	}
}
