#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


class Command{

public:

	virtual ~Command(){}
	virtual void execute() = 0;
};