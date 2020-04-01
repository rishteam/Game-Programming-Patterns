#include "flyingState.h"
#include "player.h"

void FlyingState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Space){

		printf("shoot\n");
		player.bullet_ = (BulletState*) &BulletState::generateing;
	}
}

void FlyingState::update(Player &player){

	for(int it = 0; it < player.bullet.size();it++){

		player.bullet[it]->update();
		if(player.bullet[it]->getDis() > 300){

			player.bullet.pop_front();
		}
	}
}