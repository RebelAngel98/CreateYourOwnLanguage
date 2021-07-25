#pragma once
class ComputerMemory
{
public:
	void SetRAMValue(int address, int value);
	int GetRAMValue(int address);

private: 
	//0-99 only. NO HUNDREDS
	int RAM[100];
	
};

