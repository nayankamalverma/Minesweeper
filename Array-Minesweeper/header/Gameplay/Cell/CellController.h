#pragma once
namespace Gameplay
{
	namespace Cell
	{
		class CellView;
		class CellController
		{
			CellView* cell_view;

			void destroy();
		public:

			CellController();
			~CellController();

			void initialize();
			void update();
			void render();

			void reset();
		};
	}
}