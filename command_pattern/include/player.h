#pragma once

#include <SFML/Graphics.hpp>

class Command;

class InputHandler
{
public:
    InputHandler();
    ~InputHandler();

    Command *handleInput();

private:
    Command *walkFront;
    Command *walkBack;
    Command *walkLeft;
    Command *walkRight;

    bool spacePrev;
};

class Player
{
public:
    Player()
    {
        x = 10;
        y = 20;
        //
        shape.setRadius(15);
        shape.setOutlineColor(sf::Color::Red);
        shape.setOutlineThickness(5);
        shape.setPosition(x, y);
        //
        inputHandler = new InputHandler();
    }
    ~Player()
    {
        delete inputHandler;
    }
    void update();
    void draw(sf::RenderTarget &target);

    int x, y;

private:
    InputHandler *inputHandler;
    sf::CircleShape shape;

};