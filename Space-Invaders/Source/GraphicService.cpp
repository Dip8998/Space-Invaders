#include "../Header/Graphic/GraphicService.h"

// Initialize Constructor 
GraphicService::GraphicService() {

	gameWindow = nullptr; 	videoMode = nullptr;  
}
GraphicService::~GraphicService() {
	onDestroy();}
void GraphicService::initialize() {

	gameWindow = createGameWindow(); 	gameWindow->setFramerateLimit(frameRate);
}
RenderWindow* GraphicService::createGameWindow() {
	setVideoMode(); 
	return new RenderWindow(*videoMode, gameWindowTitle); }
void GraphicService::setVideoMode() {
	videoMode = new VideoMode(gameWindowWidth, gameWindowHeight, VideoMode::getDesktopMode().bitsPerPixel); }
void GraphicService::onDestroy() {
	delete(videoMode); 	delete(gameWindow); }
void GraphicService::update(){}

void GraphicService::render(){}

bool GraphicService::isGameWindowOpen() {
	return gameWindow -> isOpen(); 
}
RenderWindow* GraphicService::getGameWindow() {
	return gameWindow; }
Color GraphicService::getWindowColor() {
	return windowColor; }