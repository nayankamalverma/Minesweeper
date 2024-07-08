#include "../../header/Gameplay/GameplayController.h"

#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
	using namespace Global;
	GameplayController::GameplayController()
	{
		board_service = nullptr;
	}

	GameplayController::~GameplayController()
	{
		
	}

	void GameplayController::initialize()
	{
		board_service = ServiceLocator::getInstance()->getBoardService();
	}

	void GameplayController::update()
	{
		updateRemainingTime();
	}

	void GameplayController::updateRemainingTime()
	{
		remaining_time -= ServiceLocator::getInstance()->getTimeService()->getDeltaTime();
	}

	void GameplayController::render()
	{

	}
	void GameplayController::restart()
	{
		ServiceLocator::getInstance()->getBoardService()->resetBoard();
		remaining_time = max_level_duration;
	}

	float GameplayController::getRemainingTime()
	{
		return remaining_time;
	}
	int GameplayController::getMinesCount()
	{
		return board_service->getMinesCount();
	}

}
