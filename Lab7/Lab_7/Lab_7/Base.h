#pragma once
class Base
{
public:
	Base();
	~Base();
	virtual void DisplayRecord() = 0;
	virtual char GetIdent() = 0;
};

