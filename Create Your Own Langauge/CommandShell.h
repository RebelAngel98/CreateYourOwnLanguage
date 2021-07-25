#pragma once
#include <string>
class CommandShell
{
public:
	void IntakeCommandFromUser(std::string commandInput); //taking stuff from the CommandShell and feeling it through here

	
private: //all the private stuff that is for moving along the project
	void ProcessCommand(std::string commandToProcess);
	void DisplayHelp();
	
};



