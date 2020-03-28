#include<shootState.h>

void ShootState::handleInput(Player &player, sf::Keyboard::Key key){

		if(key == sf::Keyboard::E){

			player.state_ = (PlayerState *)&PlayerState::standing;
			std::cout << "stand\n";
		}
}

void ShootState::update(Player &player){

	std::cout << "shoot update\n";
}

