#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include<player.h>
#include<StandState.h>


int main(){


	Player player;
	int counter = 0;

	std::cout << "press Q shoot, press E stand\n";
	

	while(1){

		counter++;

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) player.handleInput(sf::Keyboard::Q);
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) player.handleInput(sf::Keyboard::E);
	}

	return 0;
}