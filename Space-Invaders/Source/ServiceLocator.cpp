#include "../Header/ServiceLocator.h"

Servicelocator::Servicelocator() {

	graphicService = nullptr;
	eventService = nullptr;
	createServices();
}
Servicelocator::~Servicelocator() {

	clearAllServices();
}
void Servicelocator::createServices() {

	graphicService = new GraphicService();
	eventService = new EventService();
}
void Servicelocator::clearAllServices() {

	delete(graphicService);
	delete(eventService);
	graphicService = nullptr;
	eventService = nullptr;
}
Servicelocator* Servicelocator::getInstance() {

	static Servicelocator instance;
	return &instance;
}
void Servicelocator::initialize() {

	graphicService->initialize();
	eventService->initialize();
}
void Servicelocator::update() {

	graphicService->update();
	eventService->update();
}
void Servicelocator::render() {

	graphicService->render();

}
GraphicService* Servicelocator::getGraphicService() {
	return graphicService; 
}
EventService* Servicelocator::getEventService() {
	return eventService;
}