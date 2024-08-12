#include "../Header/PlayerService.h"
#include "../Header/ServiceLocator.h"
#include "../Header/EventService.h"


PlayerService::PlayerService() {

	gameWindow = nullptr;
}
PlayerService::~PlayerService() = default;

void PlayerService::initialize() {

	gameWindow = Servicelocator::getInstance() -> getGraphicService() -> getGameWindow();
	initializePlayerSprite();
}
void PlayerService::update() {
	
	processPlayerInput();
	playerSprite.setPosition(getPlayerPosition());
	
}
void PlayerService::render() {

	gameWindow->draw(playerSprite);
}
void PlayerService::processPlayerInput() {

	EventService* eventService = Servicelocator::getInstance()->getEventService();
	
	if (eventService->isKeyboardEvent()) {
		
		if (eventService-> pressedLeftKey()) {
		
			moveLeft();
		}
		if(eventService->pressedRightKey()) {
			
			moveRight();
		}
	}
}
void PlayerService::initializePlayerSprite() {

	if (playerTexture.loadFromFile(playerTexturePath)) {
		
		playerSprite.setTexture(playerTexture);
		
	}
	
}
void PlayerService::moveLeft() {

	position.x = position.x - moveSpeed * Servicelocator::getInstance()->getTimeService()->getDeltaTime();

}
void PlayerService::moveRight() {

	position.x = position.x + moveSpeed * Servicelocator::getInstance()->getTimeService()->getDeltaTime();
}

Vector2f PlayerService::getPlayerPosition() {

	
	return position;
}
float PlayerService::getMoveSpeed() {

	return moveSpeed;
}