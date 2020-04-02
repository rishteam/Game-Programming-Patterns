#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Entity{

public:
	
	Entity();
	virtual void update() = 0;
	virtual void setPosition() = 0;
	virtual void setPosition(float x, float y) = 0;
	virtual void draw(sf::RenderTarget &target) = 0;
	virtual bool isPlayer();


protected:

	bool player_;

};