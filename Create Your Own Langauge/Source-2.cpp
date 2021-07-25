#include <iostream>
#include <string>
#include "ComputerMemory.h"
#include "CommandShell.h"

int main() //small code because it was all done in the other folders. 
{
	std::cout << "\n\n\tComputer is Booting Up\n";
	std::cout << "\n\nComputer is Ready for Input\n";

	CommandShell command_shell;
	std::cout << "\n\nType in Command...\n";
	std::string userCommand;
	getline(std::cin, userCommand);
	command_shell.IntakeCommandFromUser(userCommand);

	return 0;
}
//the end of the program until Tuesday 2/25