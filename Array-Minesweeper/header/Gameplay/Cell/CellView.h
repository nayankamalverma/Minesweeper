﻿#pragma once
#include "../../header/UI/UIElement/ButtonView.h"

namespace Gameplay
{
	namespace Cell
	{
        class CellController;

        class CellView
        {
        private:

            const int tile_size = 32;
            int slice_count = 12;

            const float cell_top_offset = 274.f;
            const float cell_left_offset = 583.f;

            UI::UIElement::ButtonView* cell_button;
            CellController* cell_controller;


            void setCellTexture();
            void initializeButtonImage(float width, float height);
            sf::Vector2f getCellScreenPosition(float width, float height);

        public:
            CellView(CellController* controller);
            ~CellView();

            void initialize(float width, float height);
            void update();
            void render();
        };
	}
}