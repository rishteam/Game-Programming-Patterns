#include<shootState.h>

void ShootState::handleInput(Player &player, sf::Keyboard::Key key){

		if(key == sf::Keyboard::Q){

			player.state_ = &PlayerState::shooting;
			std::cout << "shoot\n";
		}
}

void ShootState::update(Player &player){

	std::cout << "shoot update\n";
}

