#include <iostream>
#include <SFML/Graphics.hpp>
#include "MyClass.h"
int main() {
    sf::RenderWindow window(sf::VideoMode(700, 600, 32), "Test");
    MyClass<sf::CircleShape> ball;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }

        ball.bounce(window);

        window.clear(sf::Color::Black);
        window.draw(ball);
        window.display();

    }
    return 0;
}
