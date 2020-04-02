#pragma once

#include <cstdio>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>

#include "observer.h"
#include "audioEvent.h"

// TODO: 命名問題? Audio 應該是很廣泛使用的物件
//       可是裏頭卻有 SHOOT 的判斷，如此一來便只能用在 bullet 上了
//       那為何不乾脆叫 BulletAudio 之類的呢?
class Audio : public Observer {
public:
	static Audio *audio;

	virtual void onNotify(Entity &entity, int event){
		printf("onNotify\n");
		switch (event){

			case SHOOT:

<<<<<<< HEAD
				if (entity.isPlayer()){

=======
				if (entity.isPlayer())
				{
>>>>>>> 2fb413dad27ada882b538e88ca029896ddfcca87
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
		if (!soundBuffer.loadFromFile(seName))
			printf("Failed to load sound effect: %s\n", seName.c_str());
		sf::Sound se(soundBuffer);
		se.play();
	}
};