//
// C00204076
// Brandon Seah-Dempsey
// Started at 11:46 10 October 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef POSITIONCOMPONENT_H
#define POSITIONCOMPONENT_H

#include "Component.h"

//
class PositionComponent : public Component
{
public:
	PositionComponent()
	{

	};

	~PositionComponent()
	{

	}

	void setPosition(float x, float y)
	{
		m_x = x;
		m_y = y;
	}

	float getX()
	{
		return m_x;
	}

	float getY()
	{
		return m_y;
	}

private:
	float m_x, m_y;
};

#endif // !POSITIONCOMPONENT_H

