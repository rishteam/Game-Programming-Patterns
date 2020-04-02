#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>

#include "observer.h"
#include "audioEvent.h"

class Audio : public Observer{

public:

	static Audio *audio;

	virtual void onNotify(Entity &entity, int event){
		
		printf("onNotify\n");
		switch (event){

			case SHOOT:

				if (entity.isPlayer()){

					soundEffect("data/gun_shoot.wav");
				}
			break;
		}
	}

	virtual void print(){

		printf("you success to print\n");
	}

private:

	Audio() = default;
	virtual void soundEffect(std::string seName){

		sf::SoundBuffer soundBuffer;
		if (!soundBuffer.loadFromFile(seName));
		sf::Sound se(soundBuffer);
		se.play();
	}

};


