#pragma once
#include <iostream>
#include <Windows.h>



int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0)
{
	int checked;
	std::cout << strMessage << std::endl;
	std::cin >> checked;
	if (nMaximumRange == 0 && nMinimumRange == 0) 
	{
		while (!std::cin)
		{

			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid! " << strMessage << std::endl;
			std::cin >> checked;

		}
	}	
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

void SetCursorPosition(int x, int y)//can be usefull but gotta rnik about it
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(output, pos);
}

// use char arr 
void intToBianaryString(unsigned int num, int bits)
{
    
    char* text= new char[bits + 1];
    text[bits] = '\0';
    
    for (int i = bits; i >= 0; i--)
    {
        if (num % 2 == 0)
        {
            text[i] = '0';
        }
        else
        {
            text[i] = '1';
        }
        num = num / 2;       
    }
    for (int i = 0; i <= bits; i++)
    {
        std::cout << text[i];
    }

}





