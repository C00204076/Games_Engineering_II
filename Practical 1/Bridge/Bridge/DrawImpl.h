//
// C00204076
// Brandon Seah-Dempsey
// Started at 13:06 16 September 2019
// Finished at
// Time taken:
// Known bugs:

#ifndef DRAWIMPL_H
#define DRAWIMPL_H

#include "DrawImpl.h"

class DrawImpl : public DrawAPI
{
public:
	void draw()
	{
		std::cout << "Draw Impl" << std::endl;
	}
};

#endif // !DRAWIMPL_H

