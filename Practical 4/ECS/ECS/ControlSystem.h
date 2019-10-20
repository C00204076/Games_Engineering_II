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

	void update(int id)
	{
		SDL_Event m_event;
		SDL_PollEvent(&m_event);

		for (int i = 0; i < m_entities.size(); i++)
		{
			if (m_entities[i]->getComponents<ControlComponent>(2)->m_entityID == id)
			{
				if (m_event.type == SDL_KEYDOWN)
				{
					// Left key pressed 
					if (m_event.key.keysym.sym == SDLK_LEFT)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setX(m_entities[i]->getComponents<PositionComponent>(1)->getX() - 3);
						std::cout << "Left" << std::endl;
					}// End if

					//  Right key pressed
					if (m_event.key.keysym.sym == SDLK_RIGHT)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setX(m_entities[i]->getComponents<PositionComponent>(1)->getX() + 3);
						std::cout << "Right" << std::endl;
					}// End if

					// Up key pressed
					if (m_event.key.keysym.sym == SDLK_UP)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setY(m_entities[i]->getComponents<PositionComponent>(1)->getY() - 3);
						std::cout << "Up" << std::endl;
					}// End if

					//
					if (m_event.key.keysym.sym == SDLK_DOWN)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setY(m_entities[i]->getComponents<PositionComponent>(1)->getY() + 3);
						std::cout << "Down" << std::endl;
					}// End if

				}// End if

			}//End if

		}// End for

	}

	void isButtonPressed(int id, SDL_Event e)
	{

		for (int i = 0; i < m_entities.size(); i++)
		{
			if (m_entities[i]->getComponents<ControlComponent>(2)->m_entityID == id)
			{
				if (e.type == SDL_KEYDOWN)
				{
					// Left key pressed 
					if (e.key.keysym.sym == SDLK_LEFT)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setX(m_entities[i]->getComponents<PositionComponent>(1)-> getX() - 3);
						std::cout << "Left" << std::endl;
					}// End if

					//  Right key pressed
					if (e.key.keysym.sym == SDLK_RIGHT)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setX(m_entities[i]->getComponents<PositionComponent>(1)->getX() + 3);
						std::cout << "Right" << std::endl;
					}// End if

					// Up key pressed
					if (e.key.keysym.sym == SDLK_UP)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setY(m_entities[i]->getComponents<PositionComponent>(1)->getY() - 3);
						std::cout << "Up" << std::endl;
					}// End if

					//
					if (e.key.keysym.sym == SDLK_DOWN)
					{
						m_entities[i]->getComponents<PositionComponent>(1)->setY(m_entities[i]->getComponents<PositionComponent>(1)->getY() + 3);
						std::cout << "Down" << std::endl;
					}// End if

				}// End if
			
			}//End if
		
		}// End for

		
	}

private:

};

#endif // !CONTROLSYSTEM_H

