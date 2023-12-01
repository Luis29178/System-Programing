#include "Employee.h"




Employee::Employee(char _name[], char _department[], float _salery)
{
	name = _name;
	departmen = _department;
	salery = _salery;
}
Employee::~Employee()
{
	delete[] name;
	delete[] departmen;
	
}
void Employee :: DisplayRecord()
{
	std::cout << "Name: " << name << "   Department: " << departmen << "   Salery: " << salery << std::endl;
}
