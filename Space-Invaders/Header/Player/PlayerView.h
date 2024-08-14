#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Player/PlayerView.h"
#include "../../Header/Player/PlayerController.h"
using namespace sf;

class PlayerView {

private:
	const String playerTexturePath = "assets/textures/player_ship.png";
	const float playerShipWidth = 60.0f;
	const float playerShipHeight = 60.0f;

	PlayerController* playerController;

	RenderWindow* gameWindow;

	Texture playerTexture;
	Sprite playerSprite;

	void initializePlayerSprite();
	void scalePlayerSprite();

public:
	PlayerView();
	~PlayerView();

	
	void update();
	void render();

	void initialize(PlayerController* controller);

};