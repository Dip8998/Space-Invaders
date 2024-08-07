#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
  
    
    RenderWindow win(VideoMode::getFullscreenModes()[0],"Fullscren Window", Style::Fullscreen);

    while (win.isOpen()) {
        Event event;
        while (win.pollEvent(event)) {

            if (event.type == Event::Closed)
                win.close();
        }

        win.setFramerateLimit(60);
        win.clear(Color::Blue);
        win.display();
    }

    return 0;
}