#include "bulletState.h"

#include "generateState.h"
#include "flyingState.h"
#include "Audio.h"

GenerateState BulletState::generateing;
FlyingState BulletState::flying;


BulletState::BulletState(){

	// addObserver(Audio::audio);
	// printf("add audio\n");
}

