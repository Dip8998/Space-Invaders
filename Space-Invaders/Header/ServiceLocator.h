#pragma once
#include "../Header/GraphicService.h"
#include "../Header/EventService.h"
#include "../Header/PlayerService.h"
#include "../Header/TimeService.h"

class Servicelocator {

private:

	GraphicService* graphicService;
	EventService* eventService;
	PlayerService* playerService;
	TimeService* timeService;

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
	PlayerService* getPlayerService();
	TimeService* getTimeService();


};
