#pragma once
#include <iostream>
#include <string>
#include "Memory.h"

class CPU: public Memory
{
public:
	CPU();
	~CPU();
	int ComputeMemoryLocation(int, std::string);
private:
};

