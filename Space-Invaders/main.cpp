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
        win.clear(Color::Black);

        Texture texture;
        texture.loadFromFile("assets/textures/outscal_logo.png");

        Sprite outscal_sprite;
        outscal_sprite.setTexture(texture);

        outscal_sprite.setPosition(650, 100);
        
        outscal_sprite.setScale(1, 1);

        win.draw(outscal_sprite);

        Font font;
        font.loadFromFile("assets/fonts/OpenSans.ttf");

        Text text("Hello SFML!", font, 120);
        text.setPosition(650, 300);
        text.setFillColor(Color::Yellow);
        win.draw(text);

        CircleShape circle(50);
        circle.setFillColor(Color::Red);
        circle.setPosition(win.getSize().x / 2 - circle.getRadius(), win.getSize().y / 2 - circle.getRadius());
        win.draw(circle);

        RectangleShape rs(Vector2f(200,100));
        rs.setFillColor(Color::Green);
        rs.setPosition(Vector2f(500, 500));
        win.draw(rs);

        ConvexShape triangle;
        triangle.setPointCount(3);
        triangle.setPoint(0, Vector2f(400, 300));
        triangle.setPoint(1, Vector2f(300, 500));
        triangle.setPoint(2, Vector2f(500, 500));
        triangle.setFillColor(Color::Blue);
        triangle.setPosition(Vector2f(900, 200));
        win.draw(triangle);

        win.display();
    }

    return 0;
}