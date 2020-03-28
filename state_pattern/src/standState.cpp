#include "standState.h"
#include "player.h"

void StandState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Q){

		std::cout << "to shoot state\n";
		player.state_ = (PlayerState*)&PlayerState::shooting;
	}
}

void StandState::update(Player &player){

	std::cout << "stand update\n";
}