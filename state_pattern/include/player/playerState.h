#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class ShootState;
class StandState;
class WalkFrontState;
class WalkBackState;
class WalkRightState;
class WalkLeftState;

class Player;

class PlayerState{
public:
	static ShootState shooting;
	static StandState standing;
	static WalkFrontState walkingFront;
	static WalkBackState walkingBack;
	static WalkRightState walkingRight;
	static WalkLeftState walkingLeft;

	virtual ~PlayerState() = default;
	virtual void handleInput(Player& player, sf::Keyboard::Key key) = 0;
	virtual void update(Player& player) = 0;
};
