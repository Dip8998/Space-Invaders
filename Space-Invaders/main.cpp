#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

class Player {

private:
    int health = 3;
    Vector2f position = Vector2f(200, 100);
    int moveSpeed = 5;
    int playerScore = 0;


public:
    Texture texture;
    Sprite sprite;

    int getScore() {
        return playerScore;
    }

    void setScore(int score) {
        playerScore = score;
    }

    void takeDamage() {

    }
    void move(float offsetX) {
        position.x += offsetX;


    }
    int getMoveSpeed() {

        return moveSpeed;
    }
    Vector2f getPosition() {
        return position;
    }
    void shootBullets() {

    }
    

};

int main()
{
    RenderWindow win(VideoMode::getFullscreenModes()[0], "Fullscreen Window", Style::Fullscreen);
    Player player;

    player.texture.loadFromFile("assets/textures/player_ship.png");

    player.sprite.setTexture(player.texture);
   

    while (win.isOpen()) {
        Event event;
        while (win.pollEvent(event)) {

            if (event.type == Event::Closed) {
                win.close();
            }

        }

        win.clear(Color::Black);
        win.setFramerateLimit(60);


        if (Keyboard::isKeyPressed(Keyboard::A)) {
            player.move(-1.0f * player.getMoveSpeed());

        }
        if (Keyboard::isKeyPressed(Keyboard::D)) {

            player.move(1.0f * player.getMoveSpeed());
        }

        player.sprite.setPosition(player.getPosition());

        win.draw(player.sprite);
       
      

        win.display();
    }
   
  
    return 0;
}