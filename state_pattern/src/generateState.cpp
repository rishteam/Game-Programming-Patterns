#include "generateState.h"
#include "player.h"

void GenerateState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.bullet_ = (BulletState*) &BulletState::disappeared;
	}
}


void GenerateState::update(Player &player){

	player.addBullet();
	for(int it = 0; it < player.bullet.size();it++){

		player.bullet[it]->update();
		if(player.bullet[it]->getDis() > 300){

			player.bullet.pop_front();
		}
	}
}
