#include "generateState.h"
#include "player.h"

void GenerateState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.bullet_ = (BulletState*) &BulletState::flying;
	}
}


void GenerateState::update(Player &player){

	player.addBullet();
	player.bullet_ = (BulletState *)&BulletState::flying;
}
