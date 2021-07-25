#include "Memory.h"
#include "Command_Shell.h"


#include <iostream>
#include <algorithm>


int main()
{
	system("color 7C");
	Memory mem = Memory();

	std::cout << "\n\n\t *** You have turned the computer on ***\n\n";
	std::cout << "\t *** WOULD YOU LIKE TO PLAY A GAME? ***\n\n";

	Command_Shell command_shell;
	bool leave = false;
	while (leave == false)
	{
		std::cout << "What is your command?\n";
		std::string userCommand;
		getline(std::cin, userCommand);
		std::transform(userCommand.begin(), userCommand.end(), userCommand.begin(), ::tolower);
		if (userCommand=="exit")
		{
			leave = true;
		}
		else
		{
			command_shell.IntakeFromUser(userCommand);
		}

	}



	return 0;
}
