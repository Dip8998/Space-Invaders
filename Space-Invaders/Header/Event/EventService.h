#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace Event {
	using namespace sf;
	class EventService {

	private:

		sf::Event event;
		RenderWindow* gameWindow;

		bool isGameWindowOpen();
		bool gameWindowWasClosed();
		bool hasQuitGame();

	public:


		EventService();
		~EventService();

		void initialize();
		void update();
		void processEvents();
		bool pressedEscapeKey();
		bool isKeyboardEvent();
		bool pressedLeftKey();
		bool pressedRightKey();

	};
}


