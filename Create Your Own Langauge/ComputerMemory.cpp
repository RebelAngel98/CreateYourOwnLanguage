#include "ComputerMemory.h"

void ComputerMemory::SetRAMValue(int address, int value) //inputting address  & value for code
{
	//todo:
	//todo:
	RAM[address] = value;
}

int ComputerMemory::GetRAMValue(int address)//just the address for the code
{
	return RAM[address];
}


