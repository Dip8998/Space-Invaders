#pragma once
#include "../Header/GraphicService.h"
class Servicelocator {

private:

	GraphicService* graphicService;

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

};
