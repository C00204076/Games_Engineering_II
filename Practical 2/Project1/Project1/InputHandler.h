//
// C00204076
// Brandon Seah-Dempsey
// Started at 12:23 23 September 2019
// Finished at
// Known bugs:
// Time taken:

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <iostream>
#include <conio.h>

#include "Command.h"

//
class InputHandler
{
public:
	void handleInput();

private:
	Command* m_qBtn;
	Command* m_uBtn;
	Command* m_bBtn;
	Command* m_rBtn;
	Command* m_tBtn;
	Command* m_yBtn;
};

#endif // !INPUTHANDLER_H

