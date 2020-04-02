#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include <iostream>
#include "player/player.h"
#include "keyboard.h"
#include "Audio.h"

Keyboard keyboard;

int main(){

	Player player;
	int counter = 0;

	// std::cout << "press Q shoot, press E stand\n";
	sf::RenderWindow window(sf::VideoMode(1280, 720), "State Pattern");

	while(window.isOpen()){

		sf::Event event;

		while(window.pollEvent(event)){

			if(event.type == sf::Event::Closed) window.close();

			if(event.type == sf::Event::KeyPressed){

				printf("key pressed\n");
				player.handleInput(keyboard.getKey());
			}

			if(event.type == sf::Event::KeyReleased){

				printf("key released\n");
				player.handleInput(keyboard.getKey());
			}
		}

		player.update();
		window.clear();
		player.draw(window);
		window.display();
	}
}