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
class HealthComponent : public BaseComponent<HealthComponent>
{
public:
	HealthComponent(int health, std::string name, int id) :
		m_health(health),
		m_name(name),
		BaseComponent<HealthComponent>(id)
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

	std::string getName()
	{
		return m_name;
	}

	void setName(std::string name)
	{
		this->m_name = name;
	}

private:
	int m_health;
	std::string m_name;
};

#endif // !HEALTHCOMPONENT_H

