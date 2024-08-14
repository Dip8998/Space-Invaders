#include "../../Header/Global/ServiceLocator.h"

namespace Global {
	Servicelocator::Servicelocator() {

		graphicService = nullptr;
		eventService = nullptr;
		playerService = nullptr;
		timeService = nullptr;
		createServices();
	}
	Servicelocator::~Servicelocator() {

		clearAllServices();
	}
	void Servicelocator::createServices() {

		graphicService = new GraphicService();
		eventService = new EventService();
		playerService = new PlayerService();
		timeService = new TimeService();
	}
	void Servicelocator::clearAllServices() {

		delete(graphicService);
		delete(eventService);
		delete(playerService);
		delete(timeService);
		graphicService = nullptr;
		eventService = nullptr;
		playerService = nullptr;
		timeService = nullptr;

	}
	Servicelocator* Servicelocator::getInstance() {

		static Servicelocator instance;
		return &instance;
	}
	void Servicelocator::initialize() {

		graphicService->initialize();
		eventService->initialize();
		playerService->initialize();
		timeService->initialize();
	}
	void Servicelocator::update() {

		graphicService->update();
		eventService->update();
		playerService->update();
		timeService->update();
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
	TimeService* Servicelocator::getTimeService() {
		return timeService;
	}
}
