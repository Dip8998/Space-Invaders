#pragma once
#include "../../Header/Global/ServiceLocator.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class GameService {

private:

	Servicelocator* serviceLocator;
	RenderWindow* gameWindow;

	void initialize();
	void destroy();
	void initializeVariables();

public:
	GameService();
	~GameService();
	void ignite();
	void update();
	void render();
	bool isRunning();

};
