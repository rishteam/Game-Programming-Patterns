#include "standState.h"
#include "player.h"

void StandState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Q){

		player.state_ = (PlayerState*)&PlayerState::shooting;
	}
	else if(key == sf::Keyboard::W){

		player.state_ = (PlayerState*)&PlayerState::walkingFront;
	}
	else if(key == sf::Keyboard::A){

		player.state_ = (PlayerState*)&PlayerState::walkingLeft;
	}
	else if(key == sf::Keyboard::S){

		player.state_ = (PlayerState*)&PlayerState::walkingBack;
	}
	else if(key == sf::Keyboard::D){

		player.state_ = (PlayerState*)&PlayerState::walkingRight;
	}
}

void StandState::update(Player &player){

	// std::cout << "stand update\n";
	printf("%.2f %.2f\n", player.x_, player.y_);
}