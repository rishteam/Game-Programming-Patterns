#include "bullet/bulletState.h"

#include "bullet/generateState.h"
#include "bullet/flyingState.h"
#include "Audio.h"

GenerateState BulletState::generateing;
FlyingState BulletState::flying;


BulletState::BulletState(){

	// addObserver(Audio::audio);
	// printf("add audio\n");
}

