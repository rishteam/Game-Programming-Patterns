#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Keyboard{

public:

	Keyboard();
	sf::Keyboard::Key getKey(int keyCode);

private:

	int preKey_;
	int key_;
};
