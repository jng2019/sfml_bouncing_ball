#include <iostream>
#include <SFML/Graphics.hpp>
int main() {
    sf::RenderWindow window(sf::VideoMode(700, 600, 32), "Test");
    sf::CircleShape circle;
    circle.setFillColor(sf::Color::Green);
    circle.setRadius(20.f);
    float moveX=0.1, moveY=0.1;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        circle.move(moveX, moveY);
        // if x = 500, we change to -x, -y move
        if (circle.getPosition().x==700)
            circle.move(moveX * -1, moveY * -1);
//        // if y = 500, we change to -x, y
        if (circle.getPosition().y==600)
            circle.move(moveX * -1, moveY);
//        // if x = 0, we change to x, y
        if (circle.getPosition().x==0)
            circle.move(moveX, moveY);
//        // if y = 0, we change to x, -y
        if (circle.getPosition().y==0)
            circle.move(moveX, moveY * -1);
        window.draw(circle);
        window.display();

    }
    return 0;
}
