//
// C00204076
// Brandon Seah-Dempsey
// Started at 20:25 29 September 2019
// Finished at
// Time taken:
// Known bugs:

#include "Number.h"
#include "Command.h"
#include "SimpleCommand.h"
#include "MacroCommand.h"

int main()
{
	Number object;
	Command* commands[3];
	commands[0] = &SimpleCommand(&object, &Number::dubble);

	MacroCommand two;
	two.add(commands[0]);
	two.add(commands[0]);
	commands[1] = &two;

	MacroCommand four;
	four.add(&two);
	four.add(&two);
	commands[2] = &four;

	int num, index;
	while (true)
	{
		std::cout << "Enter number selection (0=2x 1=4x 2=16x): ";
		std::cin >> num >> index;
		commands[index]->execute(num);
		std::cout << "   " << num << '\n';
	}
}