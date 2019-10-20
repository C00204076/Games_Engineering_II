//
// C00204076
// Brandon Seah-Dempsey
// Started at 10:05 15 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef CONTROLCOMPONENT_H
#define CONTROLCOMPONENT_H

#include "Component.h"

class ControlComponent : public BaseComponent<ControlComponent>
{
public:
	ControlComponent(int id) :
		BaseComponent<ControlComponent>(id)
	{

	}

	~ControlComponent()
	{
		//delete this;
	}

	

private:

};

#endif // !CONTROLCOMPONENT_H
