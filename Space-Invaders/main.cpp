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
    void move() {

    }
    void shootBullets() {

    }
    void getPosition() {

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


        if (Keyboard::isKeyPressed(Keyboard::Left)) {
            player.move();

        }
        if (Keyboard::isKeyPressed(Keyboard::Right)) {

            player.move();
        }

        player.sprite.setPosition(650, 500);
        player.sprite.setScale(1, 1);
        win.draw(player.sprite);
       
      

        win.display();
    }
   
  
    return 0;
}