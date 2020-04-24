#pragma once
#include "pch.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

#include "player/player.h"
#include "vfs.h"
#include "Audio.h"
#include "keyboard.h"

#define MS_PER_FRAME 30

extern int windowWidth_, windowHeight_;

class Game
{

public:

	Game(std::string title);
	~Game() = default;

	void gameLoop();
	void processInput();
	void update();
	void render(double elapsed=0);

private:
	sf::RenderWindow window;

	Player player;
	Keyboard keyboard;

};