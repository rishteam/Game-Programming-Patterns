#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include<allCommand.h>

class InputHandler{


public:

	enum class eKey{

		NONE,
		W,
		A,
		S,
		D,
		E
	};

	InputHandler();
	~InputHandler();

	void handleInput();
	void up_side_down();
	eKey getCurrentKey();

private:

	Command *buttonW_;
	Command *buttonA_;
	Command *buttonS_;
	Command *buttonD_;

	eKey key = eKey::NONE;
	eKey prevKey = eKey::NONE;
};