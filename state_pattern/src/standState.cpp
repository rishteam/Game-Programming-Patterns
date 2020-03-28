#include<standState.h>

void StandState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Q){

		std::cout << "to shoot state\n";
		player.state_ = &PlayerState::shooting;
	}
}

void StandState::update(Player &player){

	std::cout << "stand update\n";
}