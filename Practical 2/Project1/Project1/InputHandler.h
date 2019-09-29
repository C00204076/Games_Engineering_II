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
#include "Game.h"


//
class InputHandler
{
public:
	Command* handleInput();

private:
	QCommand* m_qBtn;
	UCommand* m_uBtn;
	BCommand* m_bBtn;
	RCommand* m_rBtn;
	TCommand* m_tBtn;
	YCommand* m_yBtn;
};

#include "Game.h"
#include "QCommand.h"
#include "UCommand.h"
#include "BCommand.h"
#include "RCommand.h"
#include "TCommand.h"
#include "YCommand.h"
#endif // !INPUTHANDLER_H

