#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class PlayerService {

private:
    int health = 3;
    Vector2f position = Vector2f(200, 100);
    int moveSpeed = 5;
    int playerScore = 0;

    const String playerTexturePath = "assets/textures/player_ship.png";

    Texture playerTexture;
    Sprite playerSprite;

    RenderWindow* gameWindow;
    void initializePlayerSprite();
    void processPlayerInput();

public:

    PlayerService();
    ~PlayerService();

    void initialize();
    void update();
    void render();

    void move(float offsetX);
    int getMoveSpeed();
    Vector2f getPlayerPosition();


};