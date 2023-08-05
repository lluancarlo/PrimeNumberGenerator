#include <iostream>
#include "Generator/Generator.h"

void MainMenu(int& input)
{
	std::cout << "||====================================||" << std::endl;
	std::cout << "||       Prime Number Generator       ||" << std::endl;
	std::cout << "||====================================||" << std::endl;
	std::cout << "||                                    ||" << std::endl;
	std::cout << "||       Select the method:           ||" << std::endl;
	std::cout << "||       1. Old Process               ||" << std::endl;
	std::cout << "||       2. Atoms of Arithmetic       ||" << std::endl;
	std::cout << "||                                    ||" << std::endl;
	std::cout << "||       0. Exit program              ||" << std::endl;
	std::cout << "||                                    ||" << std::endl;
	std::cout << "||====================================||" << std::endl;

	do
	{
		std::cout << "-> Method: ";
		std::cin >> input;

		if (input != 0 && input != 1 && input != 2)
			std::cout << "[!] Method invalid." << std::endl;
	} while (input != 0 && input != 1 && input != 2);

	std::cout << "-> Generate limit: ";
	if (input == 1)
	{
		std::cin >> input;
		OldProcess(input);
	}
	else if (input == 2)
	{
		std::cin >> input;
		AtomsOfArithmetic(input);
	}
	std::cout << std::endl << std::endl;
}

int main()
{
	int input;
	do
	{
		MainMenu(input);
	} while (input != 0);
}