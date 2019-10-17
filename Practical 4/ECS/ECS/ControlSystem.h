//
// C00204076
// Brandon Seah-Dempsey
// Started at 10:15 15 October 2019
// Finished at 
// Time taken:
// Known bugs:

#ifndef CONTROLSYSTEM_H
#define CONTROLSYSTEM_H

#include "System.h"
#include "PositionComponent.h"
#include "ControlComponent.h"

class ControlSystem : public System
{
public:
	ControlSystem()
	{

	}

	~ControlSystem()
	{
		//delete this;
	}

	void update()
	{
		SDL_Event m_event;
		SDL_PollEvent(&m_event);

		switch (m_event.type == SDL_KEYDOWN)
		{
			// Left key pressed 
			if (m_event.key.keysym.sym == SDLK_LEFT)
			{
				
			}
			//  Right key pressed
			if (m_event.key.keysym.sym == SDLK_RIGHT)
			{
				
			}
			// Up key pressed
			if (m_event.key.keysym.sym == SDLK_UP)
			{
				
			}
			//
			if(m_event.key.keysym.sym === SDLK_DOWN)
			{
				
			}
		}
	}

private:

};

#endif // !CONTROLSYSTEM_H

