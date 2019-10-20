//
// C00204076
// Brandon Seah-Dempsey
// Started at 10:12 15 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include "System.h"
#include "PositionComponent.h"

class RenderSystem : public System
{
public: 
	RenderSystem()
	{

	}

	~RenderSystem()
	{
		//delete this;
	}

	void render(SDL_Renderer* renderer)
	{
		for (int i = 0; i < m_entities.size(); i++)
		{

			SDL_RenderCopy(renderer, 
				m_entities[i]->getComponents<PositionComponent>(1)->getTexture(), 
				NULL, 
				m_entities[i]->getComponents<PositionComponent>(1)->getRect());

		}
	}

private:

};

#endif // !RENDERSYSTEM_H
