#include "keyboard.h"


sf::Keyboard::Key Keyboard::getKey(int keyCode){

	printf("%d\n", keyCode);
	if(keyCode == sf::Keyboard::A)
		return sf::Keyboard::A;
	else if (keyCode == sf::Keyboard::B)
		return sf::Keyboard::B;
	else if (keyCode == sf::Keyboard::C)
		return sf::Keyboard::C;
	else if (keyCode == sf::Keyboard::D)
		return sf::Keyboard::D;
	else if (keyCode == sf::Keyboard::E)
		return sf::Keyboard::E;
	else if (keyCode == sf::Keyboard::F)
		return sf::Keyboard::F;
	else if (keyCode == sf::Keyboard::G)
		return sf::Keyboard::G;
	else if (keyCode == sf::Keyboard::H)
		return sf::Keyboard::H;
	else if (keyCode == sf::Keyboard::I)
		return sf::Keyboard::I;
	else if (keyCode == sf::Keyboard::J)
		return sf::Keyboard::J;
	else if (keyCode == sf::Keyboard::K)
		return sf::Keyboard::K;
	else if (keyCode == sf::Keyboard::L)
		return sf::Keyboard::L;
	else if (keyCode == sf::Keyboard::M)
		return sf::Keyboard::M;
	else if (keyCode == sf::Keyboard::N)
		return sf::Keyboard::N;
	else if (keyCode == sf::Keyboard::O)
		return sf::Keyboard::O;
	else if (keyCode == sf::Keyboard::P)
		return sf::Keyboard::P;
	else if (keyCode == sf::Keyboard::Q)
		return sf::Keyboard::Q;
	else if (keyCode == sf::Keyboard::R)
		return sf::Keyboard::R;
	else if (keyCode == sf::Keyboard::S)
		return sf::Keyboard::S;
	else if (keyCode == sf::Keyboard::T)
		return sf::Keyboard::T;
	else if (keyCode == sf::Keyboard::U)
		return sf::Keyboard::U;
	else if (keyCode == sf::Keyboard::V)
		return sf::Keyboard::V;
	else if (keyCode == sf::Keyboard::W)
		return sf::Keyboard::W;
	else if (keyCode == sf::Keyboard::X)
		return sf::Keyboard::X;
	else if (keyCode == sf::Keyboard::Y)
		return sf::Keyboard::Y;
	else if (keyCode == sf::Keyboard::Z)
		return sf::Keyboard::Z;
	else if (keyCode == sf::Keyboard::Space)
		return sf::Keyboard::Space;
	else return sf::Keyboard::Unknown;
}