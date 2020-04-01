#include "playerState.h"

#include "shootState.h"
#include "standState.h"
#include "walk.h"

ShootState PlayerState::shooting;
StandState PlayerState::standing;
WalkFrontState PlayerState::walkingFront;
WalkBackState PlayerState::walkingBack;
WalkRightState PlayerState::walkingRight;
WalkLeftState PlayerState::walkingLeft;


