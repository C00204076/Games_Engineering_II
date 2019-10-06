#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include "Input.h"
#include "PlayerFSM.h"

class State
{
public:
	virtual void handleInput()
	{

	}

	virtual void update()
	{

	}

	virtual void idle(PlayerFSM* a)
	{
		std::cout << "State::Idling" << std::endl;
	}

	virtual void jumping(PlayerFSM* a)
	{
		std::cout << "State::Jumping" << std::endl;
	}

	virtual void climbing(PlayerFSM* a)
	{
		std::cout << "State::Climbing" << std::endl;
	}

};

#endif // !STATE_H

