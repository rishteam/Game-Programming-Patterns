#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class GenerateState;
class FlyingState;

class Player;

class BulletState
{
public:

	static GenerateState generateing;
	static FlyingState flying;

	virtual ~BulletState() = default;
	virtual void handleInput(Player &player, sf::Keyboard::Key key) = 0;
	virtual void update(Player &player) = 0;
};
