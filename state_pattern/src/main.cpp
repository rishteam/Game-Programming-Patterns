#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "game.h"

int main()
{
	Game game("test");
	game.gameLoop();
}
