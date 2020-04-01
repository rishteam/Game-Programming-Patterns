#pragma once

#include "bulletState.h"

class FlyingState : public BulletState
{

public:
	FlyingState() = default;
	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};