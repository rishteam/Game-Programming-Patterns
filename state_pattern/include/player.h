#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <deque>

#include "playerState.h"
#include "bulletState.h"
#include "bullet.h"
#include "Entity.h"

class Player : public Entity{

public:

	Player();
	~Player() = default;

	virtual void handleInput(sf::Keyboard::Key key);
	virtual void update();
	virtual void setPosition();
	virtual void setPosition(float x, float y);
	virtual void draw(sf::RenderTarget &target);
	virtual void addBullet();


	PlayerState* state_;
	BulletState* bullet_;
	std::deque<Bullet*> bullet;

	float x_, y_;

private:

	sf::CircleShape shape;
};