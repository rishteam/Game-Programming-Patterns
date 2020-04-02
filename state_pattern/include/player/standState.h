#pragma once

#include "playerState.h"

class StandState : public PlayerState{
public:
	StandState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};