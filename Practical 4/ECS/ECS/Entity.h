//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:26 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <vector>

class Component;

//
class Entity
{
	int m_id;
public:
	Entity()
	{

	};
	//
	void addComponent(Component c)
	{
		m_components.push_back(c);
	}
	//
	void removeComponent(Component c)
	{

	}
	//
	std::vector<Component> getComponents()
	{
		return m_components;
	}

private:
	std::vector<Component> m_components;
};

#include "Component.h"
#endif // !ENTITY_H