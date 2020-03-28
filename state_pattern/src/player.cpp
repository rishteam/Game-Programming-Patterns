#include "player.h"
#include "standState.h"

Player::Player(){

	std::cout << "init\n";
	state_ = new StandState();
}

void Player::handleInput(sf::Keyboard::Key key){

	state_->handleInput(*this, key);
}

void Player::update(){

	state_->update(*this);
}
