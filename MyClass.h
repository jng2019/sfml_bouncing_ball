//
// Created by jonat on 2/6/2023.
//

#ifndef SFML_TEMPLATE_MYCLASS_H
#define SFML_TEMPLATE_MYCLASS_H
#include <SFML/Graphics.hpp>

template <typename T>
class MyClass {
private:
    // draw
    sf::Drawable T;
    float moveX = 0.15, moveY = 0.15;
public:
    explicit MyClass(const sf::Drawable &t);

    void bounce(sf::RenderWindow &window);

};

template<typename T>
void MyClass<T>::bounce(sf::RenderWindow &window) {
    circle.move(-moveX, moveY);
    // if x = 500, we change to -x, -y move
    if (circle.getPosition().x>=window.getSize().x-40 || circle.getPosition().x<=0)
        moveX*=-1;
//        // if y = 500, we change to -x, y
    else if (circle.getPosition().y>=window.getSize().y || circle.getPosition().y <=0)
        moveY*=-1;
}

template<typename T>
MyClass<T>::MyClass(const sf::Drawable &t):T(t) {}

#include "MyClass.cpp"
#endif //SFML_TEMPLATE_MYCLASS_H
