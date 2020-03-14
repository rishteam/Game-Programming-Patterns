#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>

#include<inputHandler.h>

int main(){

	InputHandler inputHandler;

	while(1){

		inputHandler.handleInput();
	}

	return 0;
}