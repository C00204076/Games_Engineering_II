//
// C00204076
// Brandon Seah-Dempsey
// Started at 9:40 17 September 2019
// Finished at
// Time taken:
// Known bugs:

#include "GraphicProxy.h"

//
GraphicProxy::GraphicProxy()
{
	this->m_graphic = 0;
}

//
GraphicProxy::~GraphicProxy()
{
	if (m_graphic)
	{
		delete m_graphic;
	}
}

//
Graphic* GraphicProxy::getInstance(void)
{
	if (!m_graphic)
	{
		m_graphic = new Graphic();
	}

	return m_graphic;
}

//
void GraphicProxy::draw()
{
	getInstance()->draw();
}