//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:39 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef HEALTHCOMPONENT_H
#define HEALTHCOMPONENT_H

#include "Component.h"

//
class HealthComponent : public Component
{
public:
	HealthComponent(int health) :
		m_health(health)
	{

	}

	int getHealth()
	{
		return m_health;
	}

	void setHealth(int health)
	{
		this->m_health = health;
	}

private:
	int m_health;
};

#endif // !HEALTHCOMPONENT_H

