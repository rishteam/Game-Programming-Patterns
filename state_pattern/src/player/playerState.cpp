#include "player/playerState.h"

#include "player/shootState.h"
#include "player/standState.h"
#include "player/walk.h"

ShootState PlayerState::shooting;
StandState PlayerState::standing;
WalkFrontState PlayerState::walkingFront;
WalkBackState PlayerState::walkingBack;
WalkRightState PlayerState::walkingRight;
WalkLeftState PlayerState::walkingLeft;


PlayerState::PlayerState(){

	printf("add player observer\n");
	addObserver(Audio::audio);
}