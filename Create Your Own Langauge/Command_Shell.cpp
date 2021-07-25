#include "Command_Shell.h"
#include <iostream>
#include "CPU.h"
#include "InOut.h"
#include <fstream>


void Command_Shell::IntakeFromUser(std::string UserInput)
{
	ProcessCommand(UserInput);
}
//fuck the world
void Command_Shell::ProcessCommand(std::string CommandToProcess)
{ 
		if (CommandToProcess == "help")
		{
			DisplayHelp();
		}
		else if (CommandToProcess == "displaymem")
		{
			//TODO: Display Memory
			
		}
		else if (CommandToProcess == "load")
		{
			//TODO: stuff program form file into memory

		}
		else if (CommandToProcess == "run")
		{
			runProgram();
		}
		else
		{
			std::cout << "\n\nI'm sorry but that is not a viable command\n\n";
		}
}

void Command_Shell::runProgram()
{
	CPU cpu = CPU();
	//GRAB MEMORY
	int newLocation = 0;
	do
	{
		newLocation = cpu.ComputeMemoryLocation(newLocation, "4099");
	} while (newLocation >= 0 || newLocation <= 98);
	
}


void Command_Shell::DisplayHelp()
{
	std::cout << "\n\n\t ### Help Menu ###\n";
	std::cout << "\n Help - Displays this Help Menu";
	std::cout << "\n Load - Loads a program into memory";
	std::cout << "\n Run - Runs the program in memory";
	std::cout << "\n DisplayMem - Displays all Memory Locations";
	std::cout << "\n Exit - Exits this Shell";
}