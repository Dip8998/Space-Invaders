#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Player/PlayerController.h"
using namespace sf;

namespace Player {

    class PlayerService {

    private:

        PlayerController* playerController;

        int health = 3;
        Vector2f position = Vector2f(350, 500);
        float moveSpeed = 350.0f;
        int playerScore = 0;

        const String playerTexturePath = "assets/textures/player_ship.png";

        Texture playerTexture;
        Sprite playerSprite;

        RenderWindow* gameWindow;
        void initializePlayerSprite();


    public:

        PlayerService();
        ~PlayerService();

        void initialize();
        void update();
        void render();

        void moveLeft();
        void moveRight();

        void processPlayerInput();
        float getMoveSpeed();
        Vector2f getPlayerPosition();
        PlayerController* getPlayerController();


    };
}

