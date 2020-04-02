#include "player.h"
#include "standState.h"
#include "flyingState.h"

Player::Player(){

	state_ = new StandState();
	bullet_ = new FlyingState();

	player_ = true;

	x_ = 10;
	y_ = 650;

	shape.setRadius(15);
	shape.setOutlineColor(sf::Color::Blue);
	shape.setOutlineThickness(5);
	shape.setPosition(x_, y_);
	printf("player initialized\n");
}

void Player::handleInput(sf::Keyboard::Key key){

	state_->handleInput(*this, key);
	bullet_->handleInput(*this, key);
}

void Player::update(){

	state_->update(*this);
	bullet_->update(*this);
}

void Player::setPosition(){

	shape.setPosition(x_, y_);
}

void Player::setPosition(float x, float y){

	shape.setPosition(x, y);
}

void Player::draw(sf::RenderTarget &target){

	target.draw(shape);

	for(int i = 0 ; i < bullet.size() ; i++){

		bullet[i]->draw(target);
	}
}

void Player::addBullet(){

	float tmpX = shape.getPosition().x;
	float tmpY = shape.getPosition().y;
	// Bullet tmp(tmpX, tmpY);

	bullet.push_back(new Bullet(tmpX, tmpY));
}
