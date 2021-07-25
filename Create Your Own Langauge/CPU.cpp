#include "CPU.h"

CPU::CPU()
{
	std::cout << "Program started." << std::endl;
}

CPU::~CPU()
{
	std::cout << "Program ended." << std::endl;
}

int CPU::ComputeMemoryLocation(int location, std::string givenValue)
{
	int result = location;
	std::string command = givenValue.substr(0, 2);
	std::string value = givenValue.substr(2, 4);
	
	if (command == "10")
	{
		std::cout << value;
		result = ++location;
	} else if (command == "40")
	{
		result = std::stoi(value);
	}

	return result;
}