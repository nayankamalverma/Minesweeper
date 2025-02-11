#pragma once
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Sound/SoundService.h"
#include "../Gameplay/GameplayService.h"
#include "../Gameplay/Board/BoardService.h"
#include "../Time/TimeService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Event::EventService* event_service;
        Graphics::GraphicService* graphic_service;
        Sound::SoundService* sound_service;
        Time::TimeService* time_service;
        UI::UIService* ui_service;
        Gameplay::GameplayService* gameplay_service;
    	Gameplay::Board::BoardService* board_service;


        ServiceLocator();
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Event::EventService* getEventService();
        Graphics::GraphicService* getGraphicService();
        Sound::SoundService* getSoundService();
        Time::TimeService* getTimeService();
        UI::UIService* getUIService();
        Gameplay::GameplayService* getGameplayService();
    	Gameplay::Board::BoardService* getBoardService();

        void deleteServiceLocator();
    };
}
