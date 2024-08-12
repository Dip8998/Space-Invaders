#include "../../Header/Player/PlayerView.h"
#include "../../Header/ServiceLocator.h"
#include "../../Header/Player/PlayerController.h"




PlayerView::PlayerView(){}

PlayerView::~PlayerView(){}

void PlayerView::initialize(PlayerController* controller) {

	playerController = controller;
	gameWindow = Servicelocator::getInstance()->getGraphicService()->getGameWindow();
	initializePlayerSprite();
}
void PlayerView::initializePlayerSprite() {
	if (playerTexture.loadFromFile(playerTexturePath)) {
		playerSprite.setTexture(playerTexture);
		scalePlayerSprite();
	}
}
void PlayerView::scalePlayerSprite() {
	playerSprite.setScale(
	static_cast<float>(playerShipWidth) / playerSprite.getTexture()->getSize().x,
	static_cast<float>(playerShipHeight) / playerSprite.getTexture()->getSize().y
	);
}
void PlayerView::update() {
	playerSprite.setPosition(playerController->getPlayerPosition());

}
void PlayerView::render() {
	gameWindow->draw(playerSprite);
}