#include "../Header/EventService.h"
#include "../Header/GameService.h"
#include "../Header/GraphicService.h"

using namespace sf;

EventService::EventService(){
	gameWindow = nullptr;
}
EventService::~EventService() = default;

void EventService::initialize() {
	gameWindow = Servicelocator::getInstance()->getGraphicService()->getGameWindow();
}
void EventService::update() {

}
void EventService::processEvents() {

	if (isGameWindowOpen()) {

		while (gameWindow -> pollEvent(event)) {

			if (gameWindowWasClosed() || hasQuitGame()) {

				gameWindow->close();
			}

		}
	}

}
bool EventService::hasQuitGame() {
	return (isKeyboardEvent() && pressedEscapeKey());
}
bool EventService::isKeyboardEvent() {
	return event.type == Event::KeyPressed;
}
bool EventService::pressedEscapeKey() { 
	return event.key.code == Keyboard::Escape; 
}

bool EventService::isGameWindowOpen() { 
	return gameWindow != nullptr; 
}

bool EventService::gameWindowWasClosed() { 
	return event.type == Event::Closed; 
}
bool EventService::pressedLeftKey() {
	return event.key.code = Keyboard::Left;
}
bool EventService::pressedRightKey() {
	return event.key.code = Keyboard::Right;
}
