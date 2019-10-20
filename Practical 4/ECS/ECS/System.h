//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:19 15 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef SYSTEM_H
#define SYSTEM_H

#include "Entity.h"

#include <vector>

class System
{
public:
	void addEntity(Entity* entity)
	{
		m_entities.push_back(entity);
	}

protected:
	std::vector<Entity*> m_entities;
};

#endif // !SYSTEM_H
