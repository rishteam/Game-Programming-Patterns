#include "bullet/generateState.h"
#include "player/player.h"
#include "audioEvent.h"

GenerateState::GenerateState(){

	addObserver(Audio::audio);
	printf("add observer\n");
}

void GenerateState::handleInput(Player &player, sf::Keyboard::Key key){

	if(key == sf::Keyboard::Unknown){

		player.bullet_ = (BulletState*) &BulletState::flying;
	}
}

void GenerateState::update(Player &player){

	player.addBullet();
	notify(player, SHOOT);
	player.bullet_ = (BulletState *)&BulletState::flying;
}
