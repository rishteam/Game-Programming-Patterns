#include "shootState.h"
#include "player.h"

void ShootState::handleInput(Player &player, sf::Keyboard::Key key){

		if(key == sf::Keyboard::E){

			player.state_ = (PlayerState *)&PlayerState::standing;
			std::cout << "to stand state\n";
		}
}

void ShootState::update(Player &player){

	std::cout << "shoot update\n";
}
