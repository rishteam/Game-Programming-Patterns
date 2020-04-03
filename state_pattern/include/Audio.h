#pragma once

#include <cstdio>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <string>
#include <unordered_map>
#include <deque>
#include <utility>
#include <functional>

#include "observer.h"
#include "audioEvent.h"

// TODO: 命名問題? Audio 應該是很廣泛使用的物件
//       可是裏頭卻有 SHOOT 的判斷，如此一來便只能用在 bullet 上了
//       那為何不乾脆叫 BulletAudio 之類的呢?
class Audio : public Observer {
public:
	static Audio *audio;

	virtual void onNotify(Entity &entity, int event){

		status_ = event;

		switch (event){

			case CLEAR:
				clear();
			break;

			case SHOOT:

				if (entity.isPlayer()){

					soundEffect("gun_shoot");
				}
			break;

			case WALK:

				if (entity.isPlayer()){

					soundEffect("walk", true);

				}

			break;
		}
	}

	virtual void print(){

		printf("you success to print\n");
	}

private:
	Audio(){

		preStatus_ = CLEAR;
		status_ = CLEAR;

		if(!tmp.loadFromFile("data/gun_shoot.wav"))
			printf("Failed to load sound effect\n");
		soundBuffer["gun_shoot"] = tmp;

		if(!tmp.loadFromFile("data/walk.wav"))
			printf("Failed to load sound effect\n");
		soundBuffer["walk"] = tmp;
	}

	virtual void soundEffect(std::string seName, bool continuous=false){

		static bool load = false;

		if(status_ != preStatus_){
			
			load = false;
		}

		if(!load){

			se.setBuffer(soundBuffer[seName]);
			load = true;

			if(status_ == SHOOT)
				printf("load Shoot effect\n");
			else if(status_ == WALK)
				printf("load Walk effect\n");
		}

		if(continuous){

			if (se.getStatus() == sf::Sound::Stopped)
				se.play();
		}
		else{

			se.play();
		}

		preStatus_ = status_;
	}

	virtual void clear(){

	}

	int status_, preStatus_;

	std::unordered_map<std::string, sf::SoundBuffer> soundBuffer;
	sf::SoundBuffer tmp;

	sf::Sound se;
};