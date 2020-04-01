#pragma once

#include "bulletState.h"

class DisappearState : public BulletState
{

public:
	DisappearState() = default;
	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};