﻿#pragma once
#include "../../header/UI/UIElement/ButtonView.h"

namespace Gameplay
{
	namespace Cell
	{
        using namespace UI::UIElement;
        class CellController;

        class CellView
        {
        private:

            const float cell_top_offset = 274.f;
            const float cell_left_offset = 583.f;

            const int tile_size = 32;
            const int slice_count = 12;

            UI::UIElement::ButtonView* cell_button;
            CellController* cell_controller;

            void setCellTexture();
            void initializeButtonImage(float width, float height);
            sf::Vector2f getCellScreenPosition(float width, float height);
            void cellButtonCallback(ButtonType button_type);
            void registerButtonCallback();

        public:
            CellView(CellController* controller);
            ~CellView();

            void initialize(float width, float height);
            void update();
            void render();
        };
	}
}