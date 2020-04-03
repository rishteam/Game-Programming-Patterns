#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include <iostream>
#include "player/player.h"
#include "keyboard.h"
#include "Audio.h"

#define MS_PER_FRAME 120

Keyboard keyboard;

int main(){

	Player player;

	sf::Clock clock;

	sf::RenderWindow window(sf::VideoMode(1280, 720), "State Pattern");

	while(window.isOpen()){

		sf::Time start = clock.getElapsedTime();
		sf::Event event;

		while(window.pollEvent(event)){

			if(event.type == sf::Event::Closed) window.close();

			if(event.type == sf::Event::KeyPressed){

				printf("key pressed\n");
				player.handleInput(keyboard.getKey(event.key.code));
			}

			if(event.type == sf::Event::KeyReleased){

				printf("key released\n");
				player.handleInput(keyboard.getKey(sf::Keyboard::Unknown));
			}
		}

		player.update();
		window.clear();
		player.draw(window);
		window.display();

		sf::sleep(start - clock.getElapsedTime());
	}
}