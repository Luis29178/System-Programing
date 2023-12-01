#pragma once
#include "Base.h"
class Student : public Base
{
private:
	char* name;
	char* program;
	float GPA;
	float likeability;
	char Identity = 's';

public:
	Student(char _name[], char _program[], float gpa, float _likeability);
	~Student();
	void DisplayRecord();
	char GetIdent() { return Identity; };


};

