#pragma once
#include <string>
#include "CPU.h"
#include "InOut.h"

class Command_Shell: public CPU, public InOut
{
public:
	void IntakeFromUser(std::string UserInput);
	
private:
	void ProcessCommand(std::string CommandToProcess);
	void DisplayHelp();
	void runProgram();
};

