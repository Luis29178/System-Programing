#pragma once
#include <iostream>



int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0)
{
	int checked;
	std::cout << strMessage << std::endl;
	std::cin >> checked;
	while (!std::cin || checked <= nMinimumRange || checked >= nMaximumRange)
	{

		std::cin.clear();
		std::cin.ignore();
		std::cout <<"Invalid! "<< strMessage << std::endl;
		std::cin >> checked;
	}
	std::cin.clear();
	std::cin.ignore();
	return checked;
};





