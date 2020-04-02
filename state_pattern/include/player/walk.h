#pragma once

#include "playerState.h"

class WalkFrontState : public PlayerState{

public:

	WalkFrontState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};


class WalkBackState : public PlayerState{

public:

	WalkBackState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};


class WalkRightState : public PlayerState{

public:

	WalkRightState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};


class WalkLeftState : public PlayerState{

public:

	WalkLeftState() = default;

	virtual void handleInput(Player &player, sf::Keyboard::Key key);
	virtual void update(Player &player);
};

