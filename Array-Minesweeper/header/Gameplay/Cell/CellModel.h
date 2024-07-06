#pragma once
namespace Gameplay
{
	namespace Cell
	{
        enum class CellState
        {
            HIDDEN,
            OPEN,
            FLAGGED,
        };

        enum class CellValue
        {
            EMPTY,
            ONE,
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            MINE,
        };

	   class CellModel
	   {
           CellState cell_state;
           CellValue cell_value;

       public:
           CellModel();
           ~CellModel();

           CellState getCellState();
           void setCellState(CellState state);

           CellValue getCellValue();
           void setCellValue(CellValue value);

           void reset();
	   };
	}
}