#include "monster.h"

#include <iostream>

int Monster::s_nowMonster = 0;

Monster::Monster()
{
    id = Monster::s_nowMonster++;
}

// --------------------------

SquareMonster::SquareMonster(sf::RectangleShape shape, int x, int y)
{
    m_x = x;
    m_y = y;
    // std::cout << x << ' ' << y << '\n';
    m_shape = shape;
    m_shape.setPosition(m_x, m_y);
}

SquareMonster::SquareMonster(const SquareMonster &o)
{
    m_x = o.m_x;
    m_y = o.m_y;
    m_shape = o.m_shape;
    //
    m_shape.setPosition(m_x, m_y);
}

Monster* SquareMonster::clone()
{
    return new SquareMonster(*this);
}

void SquareMonster::update()
{
    m_shape.setPosition(m_x, m_y);
}

void SquareMonster::draw(sf::RenderTarget &target)
{
    target.draw(m_shape);
}

void SquareMonster::setPos(const int x, const int y)
{
    m_x = x;
    m_y = y;
}