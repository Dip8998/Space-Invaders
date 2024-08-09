#include "../Header/ServiceLocator.h"

Servicelocator::Servicelocator() {

	graphicService = nullptr;
	createServices();
}
Servicelocator::~Servicelocator() {

	clearAllServices();
}
void Servicelocator::createServices() {

	graphicService = new GraphicService();
}
void Servicelocator::clearAllServices() {

	delete(graphicService);
	graphicService = nullptr;
}
Servicelocator* Servicelocator::getInstance() {

	static Servicelocator instance;
	return &instance;
}
void Servicelocator::initialize() {

	graphicService->initialize();
}
void Servicelocator::update() {

	graphicService->update();
}
void Servicelocator::render() {

	graphicService->render();
}
GraphicService* Servicelocator::getGraphicService() {
	return graphicService; 
}