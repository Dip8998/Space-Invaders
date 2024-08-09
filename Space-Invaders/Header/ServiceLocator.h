#pragma once
#include "../Header/GraphicService.h"
#include "../Header/EventService.h"
class Servicelocator {

private:

	GraphicService* graphicService;
	EventService* eventService;

	Servicelocator();
	~Servicelocator();
	void createServices();
	void clearAllServices();

public:

	static Servicelocator* getInstance();

	void initialize();
	void update();
	void render();

	GraphicService* getGraphicService();
	EventService* getEventService();

};
