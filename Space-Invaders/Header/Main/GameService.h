#pragma once
#include "../../Header/Global/ServiceLocator.h"
#include <SFML/Graphics.hpp>
using namespace sf;

namespace Main {

	class GameService {

	private:

		Global::Servicelocator* serviceLocator;
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
}

