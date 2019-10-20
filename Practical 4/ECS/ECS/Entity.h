//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:26 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>
#include <vector>
#include <vector>
#include <unordered_map>

#include <SDL.h>
#include <SDL_image.h>

class Component;

//
class Entity
{
public:
	Entity()
	{

	};

	//
	template <class T>
	void addComponent(Component *c, int type)
	{
		m_components[type] = c;
	}

	//
	/*void removeComponent(Component c)
	{

	}*/

	//
	template <class T>
	T* getComponents(int type)
	{
		return static_cast<T*>(m_components[type]);
	}

private:
	std::unordered_map<int, Component*> m_components;
	int m_id;
};

#include "Component.h"
#endif // !ENTITY_H