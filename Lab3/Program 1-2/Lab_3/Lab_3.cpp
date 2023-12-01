// Lab_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void ItemData(int num, int* pointer);


int main()
{
	#pragma region Program_1
	int arr[15];
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < 15; i++)
	{

		std::cout << "The memory adress is " << &arr[i] << " with a value of " << arr[i]<< std::endl;

	}
	#pragma endregion 


	std::cout << "\n\n\n";
	#pragma region Program_2
	int arr_2[15];
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		arr_2[i] = rand() % 10;
	}


	for (int i = 0; i < 15; i++)
	{
		/*std::cout << "The memory adress is " << &arr[i] << " with a value of " << arr[i]<<std::endl;*/
		ItemData(arr[i], &arr[i]);
	}


	#pragma endregion

}

void ItemData(int num, int* pointer)
{
	std::cout << "The memory adress is " << pointer << " with a value of " << num<< std::endl;
	
}

