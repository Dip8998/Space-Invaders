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
    

};

int main()
{
  
    return 0;
}