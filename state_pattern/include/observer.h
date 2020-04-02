#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "entity.h"

class Observer{

public:

	virtual ~Observer() = default;
	virtual void onNotify(Entity &entity, int event) = 0;
	virtual void print() = 0;
};