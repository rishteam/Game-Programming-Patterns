#include "bullet/bullet.h"

Bullet::Bullet(float x, float y){

	startPositionX_ = x_ = x;
	startPositionY_ = y_ = y;
	
	shape.setRadius(5);
	shape.setFillColor(sf::Color::Red);

	player_ = false;
}

void Bullet::setPosition(){

	shape.setPosition(x_, y_);
}

void Bullet::handleInput(sf::Keyboard::Key key){

}

void Bullet::setPosition(float x, float y){

	shape.setPosition(x, y);
}

void Bullet::update(){

	y_ -= 0.1;
	shape.setPosition(x_, y_);
}	

void Bullet::draw(sf::RenderTarget &target){

	target.draw(shape);
}

float Bullet::getDis(){

	return -(y_ - startPositionY_);
}