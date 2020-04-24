#include "game.h"

int windowWidth_ = 1280;
int windowHeight_ = 720;

Game::Game(std::string title)
{
	window.create(sf::VideoMode(windowWidth_, windowHeight_), title);
}

void Game::gameLoop()
{
	printf("------In Game Loop------\n");
	sf::Clock clock;
	sf::Time time;
	double lag = 0.0;

	while(window.isOpen())
	{
		time = clock.restart();
		lag += (double)time.asMilliseconds();
		printf("lag: %lf\n", lag);// comment this then the game will lag

		processInput();
	
		while(lag >= MS_PER_FRAME)
		{
			update();
			lag -= MS_PER_FRAME;
		}

		window.clear();
		render();
		window.display();
	}
	printf("------End Game Loop------\n");
}

void Game::processInput()
{
	sf::Event event;
	
	while(window.pollEvent(event))
	{
		switch(event.type)
		{
			case sf::Event::Closed:
				window.close();
			break;
			case sf::Event::KeyPressed:
				printf("key pressed\n");
				player.handleInput(keyboard.getKey(event.key.code));
			break;
			case sf::Event::KeyReleased:
				printf("key released\n");
				player.handleInput(keyboard.getKey(sf::Keyboard::Unknown));
			break;
		}
	}
}

void Game::update()
{
	player.update();
}

void Game::render(double elapsed)
{
	player.draw(window);
}







