#pragma once

#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>

#include<command.h>

class FrontCommand: public Command{

public:
	
	void execute();

private:

	void walkFront();
};

class BackCommand: public Command{

public:

	void execute();

private:

	void walkBack();
};

class LeftCommand : public Command{

public:

	void execute();

private:

	void walkLeft();
};

class RightCommand: public Command{

public:

	void execute();

private:

	void walkRight();

};