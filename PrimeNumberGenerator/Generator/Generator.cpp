#include <iostream>

bool IsCousinNumber(const int& number)
{
	if (number < 2)
		return false;

	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

void OldProcess(const int& target)
{
	std::cout << std::endl << "[!] Old process result: " << std::endl;

	for (int i = 1; i < target; i++)
	{
		if (IsCousinNumber(i))
		{
			std::cout << i << ", ";
		}
	}
}

void AtomsOfArithmetic(const int& target)
{
	std::cout << std::endl << "[!] Atoms of Arithmetic result: " << std::endl;
	std::cout << "[!] Method not implemented yet." << std::endl;
}