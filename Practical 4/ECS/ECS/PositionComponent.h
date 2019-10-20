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
class PositionComponent : public BaseComponent<PositionComponent>
{
public:
	PositionComponent(SDL_Rect* rect, SDL_Texture* texture, int id) :
		m_rect(rect),
		m_texture(texture),
		BaseComponent<PositionComponent>(id)
	{

	};

	~PositionComponent()
	{
		//delete this;
	}

	//
	void setX(float x)
	{
		m_x = x;
		m_rect->x = m_x;
	}
	float getX()
	{
		return m_x;
	}

	//
	void setY(float y)
	{
		m_y = y;
		m_rect->y = m_y;
	}
	float getY()
	{
		return m_y;
	}

	//
	void setW(float w)
	{
		m_w = w;
		m_rect->w = m_w;
	}
	float getW()
	{
		return m_w;
	}

	//
	void setH(float h)
	{
		m_h = h;
		m_rect->h = m_h;
	}
	float getH()
	{
		return m_h;
	}

	SDL_Texture* getTexture()
	{
		return m_texture;
	}

	SDL_Rect* getRect()
	{
		return m_rect;
	}

private:
	float m_x, m_y, m_w, m_h;
	SDL_Texture* m_texture;
	SDL_Rect* m_rect;
};

#endif // !POSITIONCOMPONENT_H

