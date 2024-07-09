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

			CellController(sf::Vector2i position);
			~CellController();

			void initialize(float cell_width, float cell_height);
			void update();
			void render();

			void flagCell();
			void openCell();

			bool canOpenCell();

			CellValue getCellValue();
			void setCellValue(CellValue value);

			void setCellState(CellState state);
			CellState getCellState();

			sf::Vector2i getCellPosition();

			void reset();
		};
	}
}
