#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "playerState.h"

class Player{

public:

	Player();
	~Player() = default;

	virtual void handleInput(sf::Keyboard::Key key);
	virtual void update();
	virtual void setPosition();
	virtual void setPosition(float x, float y);
	virtual void draw(sf::RenderTarget &target);

	PlayerState* state_;
	float x_, y_;

private:

	sf::CircleShape shape;

};