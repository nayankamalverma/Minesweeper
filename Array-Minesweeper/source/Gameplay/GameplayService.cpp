#include "../../header/Gameplay/GameplayService.h"

namespace Gameplay
{
	GameplayService::GameplayService()
	{
		gameplay_controller = nullptr;
	}

	GameplayService::~GameplayService()
	{
		delete(gameplay_controller);
	}

	void GameplayService::initialize()
	{
		gameplay_controller = new GameplayController();
		gameplay_controller->initialize();
	}

   void GameplayService::update()
   {
	   gameplay_controller->update();
   }

	void GameplayService::render()
	{
		gameplay_controller->render();
	}

	void GameplayService::startGame()
	{
		gameplay_controller->restart();
	};

	float GameplayService::getRemainingTime()
	{
		return gameplay_controller->getRemainingTime();
	}

	int GameplayService::getMinesCount()
	{
		return gameplay_controller->getMinesCount();
	}

	 void GameplayService::endGame(GameResult result)
	 {
		 gameplay_controller->endGame(result);
	 }


}
