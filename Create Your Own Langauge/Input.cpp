#include "Input.h"

void Input::saveToFile()
{
	//sets var for file
	std::ofstream file;
	//set location var
	std::string location = "";
	//set var for filename
	std::string f_name = "";

	//prompt user for location
	std::cout << "what is the location";
	std::getline(std::cin, location);
	std::cout << "what is the file name";
	std::getline(std::cin, f_name);

	//opens||creates file with
	file.open(location + "\\" + f_name + ".newLanguage");

	for (int i = 0; i < 100; i++)
	{

	}
}

