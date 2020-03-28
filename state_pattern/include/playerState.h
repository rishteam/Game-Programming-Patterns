#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <player.h>

class ShootState;
class StandState;

class Player;

class PlayerState{

public:

	static ShootState shooting;
	static StandState standing;

	virtual ~PlayerState();
	virtual void handleInput(Player& player, sf::Keyboard::Key key);
	virtual void update(Player& player);
};



