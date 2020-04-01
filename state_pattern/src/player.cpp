#include "player.h"
#include "standState.h"

Player::Player(){

	state_ = new StandState();

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
}

void Player::update(){

	state_->update(*this);
}

void Player::setPosition(){

	shape.setPosition(x_, y_);
}

void Player::setPosition(float x, float y){

	shape.setPosition(x, y);
}

void Player::draw(sf::RenderTarget &target){

	target.draw(shape);
}
