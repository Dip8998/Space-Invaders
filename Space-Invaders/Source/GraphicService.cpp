#include "../Header/GraphicService.h"

// Initialize Constructor 
GraphicService::GraphicService() {

	gameWindow = nullptr; // GameWindow to pointer
	videoMode = nullptr;  // VideoMode to pointer

}
// Initialize Destructor
GraphicService::~GraphicService() {
	onDestroy(); // Used to CleanUp Resources
}
void GraphicService::initialize() {

	gameWindow = createGameWindow(); // Create new Game window to gameWindow pointer
	gameWindow->setFramerateLimit(frameRate);
}
RenderWindow* GraphicService::createGameWindow() {
	setVideoMode(); // Set the videomode to Window

	return new RenderWindow(*videoMode, gameWindowTitle); // Create and return new game window
}
void GraphicService::setVideoMode() {
	videoMode = new VideoMode(gameWindowWidth, gameWindowHeight, VideoMode::getDesktopMode().bitsPerPixel); // Allocates and set video mode
}
void GraphicService::onDestroy() {
	delete(videoMode); // delete videomode object
	delete(gameWindow); // delete gamewindow object
}
void GraphicService::update(){}

void GraphicService::render(){}

bool GraphicService::isGameWindowOpen() {
	return gameWindow -> isOpen(); // Return the open status for game window
}
RenderWindow* GraphicService::getGameWindow() {
	return gameWindow; // Return game window
}
Color GraphicService::getWindowColor() {
	return windowColor; // Return window color
}