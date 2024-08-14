#pragma once
#include "../../Header/Graphic/GraphicService.h"
#include "../../Header/Event/EventService.h"
#include "../../Header/Player/PlayerService.h"
#include "../../Header/Time/TimeService.h"

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
