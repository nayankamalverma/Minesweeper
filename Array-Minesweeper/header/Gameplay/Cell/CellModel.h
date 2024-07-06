﻿#pragma once
#include <SFML/System/Vector2.hpp>

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

           sf::Vector2i position;


       public:
           CellModel(sf::Vector2i position);
           ~CellModel();

           CellState getCellState();
           void setCellState(CellState state);

           CellValue getCellValue();
           void setCellValue(CellValue value);

           sf::Vector2i  getCellPosition();
           void reset();
	   };
	}
}
