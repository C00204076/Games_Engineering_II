#ifndef IDLE_H
#define IDLE_H

#include "State.h"

class Idle : public State
{
public:
	Idle()
	{

	};

	~Idle()
	{

	};

	void handleInput();
	void update();
	void climbing(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !IDLE_H