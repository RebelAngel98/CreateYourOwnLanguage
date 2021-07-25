#pragma once
#include <string>

class Memory
{
public:
	int setMemory(int location, std::string value);
	std::string getMemory(int location);
	std::string memory[100];
private:
	
};

