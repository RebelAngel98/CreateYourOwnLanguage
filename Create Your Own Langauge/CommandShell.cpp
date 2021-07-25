#include "CommandShell.h"
#include <iostream>
//came from the CommandShell.h folder

void CommandShell::IntakeCommandFromUser(std::string commandInput) //Using the keyword from CommandShell.h to process the code. 
{
	ProcessCommand(commandInput);
}

void CommandShell::ProcessCommand(std::string commandToProcess) //all the commands aren't available for this until the next part
{
	if (commandToProcess == "help")
	{
		DisplayHelp();
		
	}
	else if(commandToProcess == "displaymem" || commandToProcess == "dm")
	{
		//todo: Display entire contents of memory
		std::cout << "\nCommand Not Available\n";
	}
	else if(commandToProcess == "load")
	{
		//todo: Stuff the program from file into memory
		//into the array
		std::cout << "\nCommand Not Available\n";
	}
	else if (commandToProcess == "run")
	{
		//todo: start and run program
		std::cout << "\nCommand Not Available\n";
	}
	else if (commandToProcess == "exit") 
	{
		//todo:
		std::cout << "\nCommand Not Available\n";
	}
	else
	{
		std::cout << "\n\n*** Unknown Command ***\n";
	}
	
}

void CommandShell::DisplayHelp() //help menu that is shown to the programmer and the person reviewing the code. 
{
	std::cout << "\n\n\t ###Help Menu###\n";
	std::cout << "\nHelp - Displays the Help Menu\n";
	std::cout << "\nLoad - Loads a program into memory";
	std::cout << "\nRun - Runs the program in memory";
	std::cout << "\nDisplayMem - Displays all memory locations and values aka Dump memory";
	std::cout << "\nExit - Exits this Shell";
}
