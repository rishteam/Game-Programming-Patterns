#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class ShootState;
class StandState;

class Player;

class PlayerState{
public:
	static ShootState shooting;
	static StandState standing;

	virtual ~PlayerState() = default;
	virtual void handleInput(Player& player, sf::Keyboard::Key key) = 0;
	virtual void update(Player& player) = 0;
};
