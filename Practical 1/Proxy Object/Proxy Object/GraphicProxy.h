//
// C00204076
// Brandon Seah-Dempsey
// Started at 9:36 17 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef GRAPHICPROXY_H
#define GRAPHICPROXY_H

#include "Graphic.h"
#include "IGraphic.h"

//
class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void draw();

private:
	Graphic* m_graphic;
	Graphic* getInstance(void);
};

#endif // !GRAPHICPROXY_H
