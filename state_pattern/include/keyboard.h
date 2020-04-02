#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Keyboard
{

public:
	Keyboard() = default;
	sf::Keyboard::Key getKey(int keyCode);
};
