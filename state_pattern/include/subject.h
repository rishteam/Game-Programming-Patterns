#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <list>

#include "observer.h"
#include "entity.h"

#define MAX_OBSERVERS 100

class Subject{

public:

	Subject();

	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);

	int getsize();
	
protected:

	void notify(Entity &entity, int event);

private:

	Observer* observers_[MAX_OBSERVERS];
	// std::list<Observer*> observers_;
	int numObservers;
};