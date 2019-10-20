//
// C00204076
// Brandon Seah-Dempsey
// Started at 10:59 17 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef HEALTHSYSTEM_H
#define HEALTHSYSTEM_H

#include "System.h"
#include "HealthComponent.h"

class HealthSystem : public System
{
public:
	HealthSystem()
	{

	}

	~HealthSystem()
	{
		//delete this;
	}

	void update()
	{
		for (int i = 0; i < m_entities.size(); i++)
		{
			std::cout << m_entities[i]->getComponents<HealthComponent>(0)->getName() << std::endl;
			std::cout << m_entities[i]->getComponents<HealthComponent>(0)->getHealth() << std::endl;
		}
	}

private:

};

#endif // !HEALTHSYSTEM_H

