#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include<iostream>
#include<playerState.h>

class PlayerState;

class Player{

public:
	
	Player();
	~Player() = default;

	virtual void handleInput(sf::Keyboard::Key key);
	virtual void update();

	PlayerState* state_;
private:


};