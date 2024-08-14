#pragma once
#include "../../Header/Global/ServiceLocator.h"
#include <SFML/Graphics.hpp>
using namespace sf;

namespace Main {

	enum class GameState {
		BOOT,
		MAIN_MENU,
		GAMEPLAY,	
	};

	class GameService {

	private:

		Global::Servicelocator* serviceLocator;
		RenderWindow* gameWindow;

		static GameState currentState;

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

		static void setGameState(GameState newState);
		static GameState getGameState();

	};
}

