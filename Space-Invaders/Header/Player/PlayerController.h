#pragma once
#include <SFML/Graphics.hpp>

enum class PlayerState;
class PlayerView;
class PlayerModel;

class PlayerController {

	PlayerView* playerView;
	PlayerModel* playerModel;

	void processPlayerInput();
	void moveLeft();
	void moveRight();

public:

	PlayerController();
	~PlayerController();

	void initialize();
	void update();
	void render();

	sf::Vector2f getPlayerPosition();

};

