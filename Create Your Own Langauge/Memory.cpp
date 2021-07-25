#include "Memory.h"



//Memory::Memory(std::string value)
//{
//	for (int i = 0; i < 100; i++)
//		memory[i] = value;
//}

void Memory::setMemory(int location, std::string value)
{
	if (location >= 0 && location <= 99)
	{
		if (value.length() <= 4)
		{
			memory[location] = value;
		}
	}
}

std::string Memory::getMemory(int location)
{
	return memory[location];
}
