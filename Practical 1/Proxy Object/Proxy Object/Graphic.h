//
// C00204076
// Brandon Seah-Dempsey
// Started at 18:38 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphic.h"

//
class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void draw();
};

#endif // !GRAPHIC_H

