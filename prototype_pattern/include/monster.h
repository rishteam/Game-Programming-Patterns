#pragma once

#include <SFML/Graphics.hpp>

class Monster
{
public:
    static int s_nowMonster;

    Monster();
    virtual ~Monster() = default;
    virtual Monster* clone() = 0;

    virtual void setPos(const int x, const int y) = 0;

    virtual void update() = 0;
    virtual void draw(sf::RenderTarget &target) = 0;

    int id;
};

class SquareMonster : public Monster
{
public:
    SquareMonster(sf::RectangleShape shape, int x = 0, int y = 0);
    SquareMonster(const SquareMonster &o);

    virtual Monster* clone() override;
    virtual void update() override;
    virtual void draw(sf::RenderTarget &target) override;

    virtual void setPos(const int x, const int y) override;

    int m_x, m_y;
    sf::RectangleShape m_shape;
};