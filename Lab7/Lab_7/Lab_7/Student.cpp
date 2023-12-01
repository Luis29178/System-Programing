#include "Student.h"
#include <iostream>


Student::Student(char _name[], char _program[], float gpa, float _likeability)
{
	name = _name;
	program = _program;
	GPA = gpa;
	likeability = _likeability;
}

Student::~Student()
{
	delete[] name;
	delete[] program;
}

void Student :: DisplayRecord()
{
	std::cout << "Name: " << name << "   Program: " << program << "   GPA: " << GPA << "   Likeability: " << likeability << std::endl;
}
