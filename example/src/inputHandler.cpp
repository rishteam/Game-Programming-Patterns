#include<inputHandler.h>

InputHandler::InputHandler(){

	buttonW_ = new FrontCommand();
	buttonA_ = new LeftCommand();
	buttonS_ = new BackCommand();
	buttonD_ = new RightCommand();
}

InputHandler::~InputHandler(){

	delete buttonW_;
	delete buttonA_;
	delete buttonS_;
	delete buttonD_;
}

InputHandler::eKey InputHandler::getCurrentKey(){
	
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) return eKey::W;
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) return eKey::A;
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) return eKey::S;
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) return eKey::D;
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) return eKey::E;
		else return eKey::NONE;
}

void InputHandler::handleInput(){

	key = getCurrentKey();

	if(prevKey != key){

		if(key == eKey::W){

			printf("W pressed, ");
			buttonW_->execute();
		}
		else if(key == eKey::A){

			printf("A pressed, ");
			buttonA_->execute();
		}
		else if(key == eKey::S){

			printf("S pressed, ");
			buttonS_->execute();
		}
		else if(key == eKey::D){

			printf("D pressed, ");
			buttonD_->execute();
		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)) up_side_down();
		else prevKey = eKey::NONE;
	}
	else prevKey = eKey::NONE;


	prevKey = key;
}

void InputHandler::up_side_down(){

	std::swap(buttonA_, buttonD_);
	std::swap(buttonW_, buttonS_);
}
