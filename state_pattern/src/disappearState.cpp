#include "disappearState.h"
#include "player.h"

void DisappearState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Q){

		player.bullet_ = (BulletState*) &BulletState::generateing;
	}
}

void DisappearState::update(Player &player){

	
}