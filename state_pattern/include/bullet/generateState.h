#pragma once

#include "bulletState.h"
#include "subject.h"

class GenerateState : public BulletState, public Subject{

public:

	GenerateState();
	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);

};