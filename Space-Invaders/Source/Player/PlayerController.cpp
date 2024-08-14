#include "../../Header/Player/PlayerController.h"
#include "../../Header/Player/PlayerModel.h"
#include "../../Header/Player/PlayerView.h"
#include "../../Header/Event/EventService.h"
#include "../../Header/Global/ServiceLocator.h"
#include<algorithm>

using namespace sf;

PlayerController::PlayerController(){
	playerView = new PlayerView();
	playerModel = new PlayerModel();
}
PlayerController::~PlayerController() {
	delete(playerView);
	delete(playerModel);
}
void PlayerController::initialize() {
	playerModel->initialize();
	playerView->initialize(this);
}
void PlayerController::update() {
	processPlayerInput();
	playerView->update();
}
void PlayerController::render() {
	playerView->render();
}
Vector2f PlayerController::getPlayerPosition() {
	return playerModel->getPlayerPosition();
}
void PlayerController::processPlayerInput() {
	if ((Keyboard::isKeyPressed(Keyboard::Left)))
	{
		moveLeft();
	}
	
	if ((Keyboard::isKeyPressed(Keyboard::Right)))
	{
		moveRight();
	}
}
void PlayerController::moveLeft() {
	Vector2f currentPosition = playerModel->getPlayerPosition();
	currentPosition.x -= playerModel->playerMovementSpeed * Servicelocator::getInstance()->getTimeService()->getDeltaTime();

	currentPosition.x = std::max(currentPosition.x, playerModel->leftMostPosition.x);
	playerModel->setPlayerPosition(currentPosition);
}
void PlayerController::moveRight() {
	Vector2f currentPosition = playerModel->getPlayerPosition();
	currentPosition.x += playerModel->playerMovementSpeed * Servicelocator::getInstance()->getTimeService()->getDeltaTime();

	currentPosition.x = std::min(currentPosition.x, playerModel->rightMostPosition.x);
	playerModel->setPlayerPosition(currentPosition);

}