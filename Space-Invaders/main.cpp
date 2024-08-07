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
        win.clear(Color::Red);
        CircleShape circle(50);
        circle.setFillColor(Color::Blue);
        circle.setPosition(win.getSize().x / 2 - circle.getRadius(), win.getSize().y / 2 - circle.getRadius());
        win.draw(circle);

        RectangleShape rs(Vector2f(200,100));
        rs.setFillColor(Color::Green);
        rs.setPosition(Vector2f(1, -1));
        win.draw(rs);

        ConvexShape triangle;
        triangle.setPointCount(3);
        triangle.setPoint(0, Vector2f(400, 100));
        triangle.setPoint(1, Vector2f(300, 500));
        triangle.setPoint(2, Vector2f(500, 500));
        triangle.setFillColor(Color::Black);
        triangle.setPosition(Vector2f(700, 600));
        win.draw(triangle);
        win.display();
    }

    return 0;
}