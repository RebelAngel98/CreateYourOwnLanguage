#include "InOut.h"

void InOut::LoadToFile()
{
	
	//sets var for file
	std::ofstream file;
	//sets var for file name
	std::string f_name = "";

	std::cout << "enter filename";
	std::getline(std::cin, f_name);

	std::ifstream file(f_name);
	std::string text;

	while (getline(f_name, text)) {
		cout << text;
	}

}

