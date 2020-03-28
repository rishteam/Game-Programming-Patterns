#include<standState.h>

void StandState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Q){

		player.state_ = (PlayerState*)&PlayerState::shooting;
		std::cout << "to shoot state\n";
	}
}

void StandState::update(Player &player){

	std::cout << "stand update\n";
}