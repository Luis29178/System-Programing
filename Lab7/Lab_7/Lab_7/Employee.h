#pragma once
#include "Base.h"
#include <iostream>
class Employee : public Base
{
private:
	char* name;
	char* departmen;
	float salery;
	char Identity = 'e';


public:
	Employee(char _name[], char _department[], float _salery);

	~Employee();

	void DisplayRecord();
	char GetIdent() { return Identity; };
	

};

