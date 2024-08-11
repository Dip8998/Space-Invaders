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
		if (eventService->pressedLeftKey()) {
			move(-1.0f * getMoveSpeed());
		}
		if(eventService->pressedRightKey()) {
			move(1.0f * getMoveSpeed());
		}
	}
}
void PlayerService::initializePlayerSprite() {
	if (playerTexture.loadFromFile(playerTexturePath)) {
		playerSprite.setTexture(playerTexture);
	}
}
void PlayerService::move(float offsetX) {
	position.x = position.x + offsetX;
}
Vector2f PlayerService::getPlayerPosition() {
	return position;
}
int PlayerService::getMoveSpeed() {
	return moveSpeed;
}