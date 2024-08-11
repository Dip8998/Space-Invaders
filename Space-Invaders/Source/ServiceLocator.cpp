#include "../Header/ServiceLocator.h"

Servicelocator::Servicelocator() {

	graphicService = nullptr;
	eventService = nullptr;
	playerService = nullptr;
	createServices();
}
Servicelocator::~Servicelocator() {

	clearAllServices();
}
void Servicelocator::createServices() {

	graphicService = new GraphicService();
	eventService = new EventService();
	playerService = new PlayerService();
}
void Servicelocator::clearAllServices() {

	delete(graphicService);
	delete(eventService);
	delete(playerService);
	graphicService = nullptr;
	eventService = nullptr;
	playerService = nullptr;
}
Servicelocator* Servicelocator::getInstance() {

	static Servicelocator instance;
	return &instance;
}
void Servicelocator::initialize() {

	graphicService->initialize();
	eventService->initialize();
	playerService->initialize();
}
void Servicelocator::update() {

	graphicService->update();
	eventService->update();
	playerService->update();
}
void Servicelocator::render() {

	graphicService->render();
	playerService->render();

}
GraphicService* Servicelocator::getGraphicService() {
	return graphicService; 
}
EventService* Servicelocator::getEventService() {
	return eventService;
}
PlayerService* Servicelocator::getPlayerService() {
	return playerService;
}