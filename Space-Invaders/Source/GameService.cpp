#include "../Header/GameService.h"
#include "../Header/ServiceLocator.h"

void GameService::initialize() {


}
void GameService::destroy() {


}
GameService::GameService() { 
	serviceLocator = nullptr;
	gameWindow = nullptr;
}
GameService::~GameService() {
	destroy();
}
void GameService::ignite() {
	serviceLocator = Servicelocator::getInstance();
	initialize();

}
void GameService::initialize() {

	serviceLocator->initialize();
	initializeVariables();

}
void GameService::initializeVariables()
{
	gameWindow = serviceLocator -> getGraphicService() -> getGameWindow(); //set game window (it was null before this)
}
void GameService::update() {
	serviceLocator->update();
}
void GameService::render() {
	gameWindow->clear(serviceLocator->getGraphicService()->getWindowColor());
	serviceLocator->render();
	gameWindow->display();


}
bool GameService::isRunning() {
	return serviceLocator -> getGraphicService() -> isGameWindowOpen();

}