#ifndef JUMPING_H
#define JUMPING_H

#include "State.h"

class Jumping : public State
{
public:
	Jumping()
	{

	};

	~Jumping()
	{

	};

	void climbing(PlayerFSM* a);
	void idle(PlayerFSM* a);
};

#endif // !JUMPING_H