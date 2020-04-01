#pragma once

#include "bulletState.h"

class GenerateState : public BulletState{

public:

	GenerateState() = default;
	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);

};