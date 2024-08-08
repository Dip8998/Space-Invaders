#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

class Player {


    Texture texture;
    Sprite sprite;
    int health = 3;
    Vector2f position = Vector2f(200, 100);
    int moveSpeed = 5;
    int playerScore = 0;

};

int main()
{
  
    Player playerOBJ;
    cout << playerOBJ.moveSpeed;
    /*RenderWindow win(VideoMode::getFullscreenModes()[0], "Fullscren Window", Style::Fullscreen);

    while (win.isOpen()) {
        Event event;
        while (win.pollEvent(event)) {

            if (event.type == Event::Closed)
                win.close();
        }

        win.setFramerateLimit(60);
        win.clear(Color::Black);

        win.display();
    }*/

    return 0;
}