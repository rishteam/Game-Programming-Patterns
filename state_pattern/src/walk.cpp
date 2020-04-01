#include "walk.h"
#include "player.h"

/****** WalkFront ******/

void WalkFrontState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
	}
}

void WalkFrontState::update(Player &player){

	player.y_ -= 0.2;
	player.setPosition();
}

/***********************/
/****** WalkBack ******/

void WalkBackState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
	}
}

void WalkBackState::update(Player &player){

	player.y_ += 0.2;
	player.setPosition();
}

/***********************/
/****** WalkFront ******/

void WalkLeftState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
	}
}

void WalkLeftState::update(Player &player){

	player.x_ -= 0.2;
	player.setPosition();
}

/***********************/
/****** WalkFront ******/

void WalkRightState::handleInput(Player &player, sf::Keyboard::Key key){

	if (key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState *)&PlayerState::standing;
	}
}

void WalkRightState::update(Player &player){

	player.x_ += 0.2;
	player.setPosition(); 
}

/***********************/
