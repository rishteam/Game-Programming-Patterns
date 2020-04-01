#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Bullet{

public:

	Bullet(float x, float y);
	~Bullet() = default;
	virtual void handleInput(sf::Keyboard::Key key);
	virtual void update();
	virtual void setPosition();
	virtual void setPosition(float x, float y);
	virtual void draw(sf::RenderTarget &target);
	virtual float getDis();


	float startPositionX_, startPositionY_;
	float x_, y_;

private:

	sf::CircleShape shape;

};