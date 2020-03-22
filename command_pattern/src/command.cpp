#include "command.h"

void WalkFrontCommand::execute(Player &player)
{
    player.y -= 5;
}

void WalkBackCommand::execute(Player &player)
{
    player.y += 5;
}

void WalkLeftCommand::execute(Player &player)
{
    player.x -= 5;
}

void WalkRightCommand::execute(Player &player)
{
    player.x += 5;
}