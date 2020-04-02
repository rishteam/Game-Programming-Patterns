#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

// #include "subject.h"
#include "Audio.h"

// static Audio_ *audio_;

class GenerateState;
class FlyingState;

class Player;

class BulletState{

public:

	static GenerateState generateing;
	static FlyingState flying;

	BulletState();
	virtual ~BulletState() = default;
	virtual void handleInput(Player &player, sf::Keyboard::Key key) = 0;
	virtual void update(Player &player) = 0;
};
