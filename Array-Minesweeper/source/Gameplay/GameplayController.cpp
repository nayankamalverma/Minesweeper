#include "../../header/Gameplay/GameplayController.h"

#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
	using namespace Global;
	GameplayController::GameplayController()
	{
		
	}

	GameplayController::~GameplayController()
	{
		
	}

	void GameplayController::initialize()
	{
		
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

}
