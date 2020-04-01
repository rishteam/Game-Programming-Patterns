#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Bullet{

public:

	Bullet(float x, float y);
	~Bullet() = default;
	void handleInput(sf::Keyboard::Key key);
	void update();
	void setPosition();
	void setPosition(float x, float y);
	void draw(sf::RenderTarget &target);
	float getDis();


	float startPositionX_, startPositionY_;
	float x_, y_;

private:

	sf::CircleShape shape;

};