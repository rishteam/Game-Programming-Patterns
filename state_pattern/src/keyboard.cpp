#include "keyboard.h"


sf::Keyboard::Key Keyboard::getKey(){

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		return sf::Keyboard::A;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::B))
		return sf::Keyboard::B;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		return sf::Keyboard::C;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		return sf::Keyboard::D;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		return sf::Keyboard::E;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		return sf::Keyboard::F;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		return sf::Keyboard::G;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		return sf::Keyboard::H;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		return sf::Keyboard::I;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		return sf::Keyboard::J;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::K))
		return sf::Keyboard::K;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::L))
		return sf::Keyboard::L;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::M))
		return sf::Keyboard::M;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::N))
		return sf::Keyboard::N;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::O))
		return sf::Keyboard::O;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::P))
		return sf::Keyboard::P;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		return sf::Keyboard::Q;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
		return sf::Keyboard::R;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		return sf::Keyboard::S;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		return sf::Keyboard::T;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		return sf::Keyboard::U;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::V))
		return sf::Keyboard::V;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		return sf::Keyboard::W;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		return sf::Keyboard::X;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
		return sf::Keyboard::Y;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
		return sf::Keyboard::Z;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		return sf::Keyboard::Space;
	else return sf::Keyboard::Unknown;
}