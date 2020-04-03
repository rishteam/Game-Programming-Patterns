#include "keyboard.h"


Keyboard::Keyboard(){

	key_ = sf::Keyboard::Unknown;
	preKey_ = sf::Keyboard::Unknown;
}

sf::Keyboard::Key Keyboard::getKey(int keyCode){


	key_ = keyCode;
	bool canShoot = true;
	if(key_ == preKey_) canShoot = false;


	preKey_= key_;

	if(key_ == sf::Keyboard::A)
		return sf::Keyboard::A;
	else if (key_ == sf::Keyboard::B)
		return sf::Keyboard::B;
	else if (key_ == sf::Keyboard::C)
		return sf::Keyboard::C;
	else if (key_ == sf::Keyboard::D)
		return sf::Keyboard::D;
	else if (key_ == sf::Keyboard::E)
		return sf::Keyboard::E;
	else if (key_ == sf::Keyboard::F)
		return sf::Keyboard::F;
	else if (key_ == sf::Keyboard::G)
		return sf::Keyboard::G;
	else if (key_ == sf::Keyboard::H)
		return sf::Keyboard::H;
	else if (key_ == sf::Keyboard::I)
		return sf::Keyboard::I;
	else if (key_ == sf::Keyboard::J)
		return sf::Keyboard::J;
	else if (key_ == sf::Keyboard::K)
		return sf::Keyboard::K;
	else if (key_ == sf::Keyboard::L)
		return sf::Keyboard::L;
	else if (key_ == sf::Keyboard::M)
		return sf::Keyboard::M;
	else if (key_ == sf::Keyboard::N)
		return sf::Keyboard::N;
	else if (key_ == sf::Keyboard::O)
		return sf::Keyboard::O;
	else if (key_ == sf::Keyboard::P)
		return sf::Keyboard::P;
	else if (key_ == sf::Keyboard::Q)
		return sf::Keyboard::Q;
	else if (key_ == sf::Keyboard::R)
		return sf::Keyboard::R;
	else if (key_ == sf::Keyboard::S)
		return sf::Keyboard::S;
	else if (key_ == sf::Keyboard::T)
		return sf::Keyboard::T;
	else if (key_ == sf::Keyboard::U)
		return sf::Keyboard::U;
	else if (key_ == sf::Keyboard::V)
		return sf::Keyboard::V;
	else if (key_ == sf::Keyboard::W)
		return sf::Keyboard::W;
	else if (key_ == sf::Keyboard::X)
		return sf::Keyboard::X;
	else if (key_ == sf::Keyboard::Y)
		return sf::Keyboard::Y;
	else if (key_ == sf::Keyboard::Z)
		return sf::Keyboard::Z;
	else if (key_ == sf::Keyboard::Space && canShoot)
		return sf::Keyboard::Space;
	else return sf::Keyboard::Unknown;
	
}