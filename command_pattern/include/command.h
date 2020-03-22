#pragma once

#include "player.h"

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute(Player &player) = 0;
};

class WalkFrontCommand : public Command
{
public:
    virtual void execute(Player &player) override;
};

class WalkBackCommand : public Command
{
public:
    virtual void execute(Player &player) override;
};

class WalkLeftCommand : public Command
{
public:
    virtual void execute(Player &player) override;
};

class WalkRightCommand : public Command
{
public:
    virtual void execute(Player &player) override;
};