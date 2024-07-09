#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Main/GameService.h"
#include "../../header/Global/ServiceLocator.h"

namespace Gameplay
{
	using namespace Main;
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

	void GameplayController::beginGameOverTimer()
	{
		remaining_time = game_over_time;
	}

	void GameplayController::updateRemainingTime()
	{
		remaining_time -= ServiceLocator::getInstance()->getTimeService()->getDeltaTime();
	}

	void GameplayController::render()
	{

	}
	void GameplayController::showCredits()
	{
		GameService::setGameState(GameState::CREDITS);
	}


	void GameplayController::endGame(GameResult result)
	{
		// The switch statement handles the different possible outcomes of the game.
		switch (result)
		{
			// In case the game is won, the gameWon() method is called.
		case GameResult::WON:
			gameWon();
			break;
			// In case the game is lost, the gameLost() method is called.
		case GameResult::LOST:
			gameLost();
			break;
			// The default case is not used here as all possible game outcomes should be WON or LOST.
		default:
			// No action is needed for default case.
			break;
		}
	}

	void GameplayController::gameWon()
	{
		
	}
	void GameplayController::gameLost()
	{
		if (game_result == GameResult::NONE)
		{
			game_result = GameResult::LOST;
			beginGameOverTimer();
			board_service->showBoard();
			board_service->setBoardState(Board::BoardState::COMPLETED);
		}
		else
		{
			showCredits();
		}

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
