#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class PlayerService {

private:
    int health = 3;
    Vector2f position = Vector2f(350, 500);
    float moveSpeed = 350.0f;
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

    void moveLeft();
    void moveRight();
    void move(float offsetX);
    float getMoveSpeed();
    Vector2f getPlayerPosition();


};