#include <iostream>
#include <vector>
#include <Windows.h>
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Helper.h"



Base* addRecord();
void ManageRecords(std::vector<Base*> accounts);


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//_CrtSetBreakAlloc(207);
	_CrtDumpMemoryLeaks();

	std::vector<Base*> vBase;
	Base* x;
	bool run = true;
	int Choice;
	while (run)
	{
		system("CLS");
		std::cout << "\tOptions\n" << "1) Add Record\n" << "2) Records\n" << "3) Exit"<< std::endl;
		Choice = GetValidatedInt("Choice", 0, 4);
		switch (Choice)
		{
		case 1:
			system("CLS");
			x = addRecord();
			vBase.push_back(x);
			break;
		case 2:
			system("CLS");
			ManageRecords(vBase);

			break;
		case 3:
			for (int i = 0; i < vBase.size(); i++)
			{
				delete vBase[i];
			}
			
			run = false;

			break;
		default:
			break;
		}



	}


}


Base* addRecord()
{
	std::cout << "\tOptions\n" << "1) Employee\n" << "2) Student\n\n";
	int choice = GetValidatedInt("Choice",0,3);
	char* depart = new char[50];
	char* name= new char [50];
	float salary;
	float GPA;

	if (choice == 1)
	{
		system("CLS");
		std::cout << "Name: ";
		std::cin.getline(name, 50);
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\n" << "Department: ";
		std::cin.getline(depart, 50);
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\n" << "Salary: ";
		salary = GetValidatedInt("", 0, INT32_MAX);

		Employee *nEmployee = new Employee(name, depart, salary);
		
		return nEmployee;
	}
	if (choice == 2)
	{
		system("CLS");
		std::cout << "Name: ";
		std::cin.getline(name, 50);
		std::cout <<"\n"<< "Program: ";
		std::cin.getline(depart, 50);
		std::cout << "\n" << "GPA: ";
		std::cin >> GPA;
		std::cin.clear();
		std::cin.ignore();
		std::cout << "\n" << "Likeability: ";
		salary = GetValidatedInt("", 0, INT32_MAX);
		Student* nStudent = new Student(name, depart, GPA, salary);
		return nStudent;
	}
}


void ManageRecords(std::vector<Base*> accounts)
{
	int sx = 0;
	int sy = 0;
	int ex = 70;
	int ey = 0;
	int selection;
	int x;
	int y;
	SetCursorPosition(sx, sy);
	sy += 2;
	std::cout << "--------------------------Students------------------------";
	SetCursorPosition(ex, ey);
	ey += 2;
	std::cout << "--------------------------Employees-------------------------";
	x = ex - 5;
	y = sy;
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts[i]->GetIdent() == 's')
		{
			SetCursorPosition(sx, sy);
			accounts[i]->DisplayRecord();
			sy + 2;

		}
		if (accounts[i]->GetIdent() == 'e')
		{
			SetCursorPosition(ex, ey);
			accounts[i]->DisplayRecord();
			ey + 2;

		}
	}
	
	

}



