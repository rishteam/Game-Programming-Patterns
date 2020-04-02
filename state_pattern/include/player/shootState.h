#pragma once

#include "playerState.h"

class ShootState : public PlayerState{
public:
	ShootState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};
