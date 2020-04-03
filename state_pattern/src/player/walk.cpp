#include "player/walk.h"
#include "player/player.h"
#include "audioEvent.h"

/****** WalkFront ******/

void WalkFrontState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
		notify(player, CLEAR);
	}
}

void WalkFrontState::update(Player &player){

	notify(player, WALK);
	player.y_ -= 0.2;
	player.setPosition();
}

/***********************/
/****** WalkBack ******/

void WalkBackState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
		notify(player, CLEAR);
	}
}

void WalkBackState::update(Player &player){

	notify(player, WALK);
	player.y_ += 0.2;
	player.setPosition();
}

/***********************/
/****** WalkFront ******/

void WalkLeftState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState*)&PlayerState::standing;
		notify(player, CLEAR);
	}
}

void WalkLeftState::update(Player &player){

	notify(player, WALK);
	player.x_ -= 0.2;
	player.setPosition();
}

/***********************/
/****** WalkFront ******/

void WalkRightState::handleInput(Player &player, sf::Keyboard::Key key){

	if (key == sf::Keyboard::Unknown){

		player.state_ = (PlayerState *)&PlayerState::standing;
		notify(player, CLEAR);
	}
}

void WalkRightState::update(Player &player){

	notify(player, WALK);
	player.x_ += 0.2;
	player.setPosition(); 
}

/***********************/
