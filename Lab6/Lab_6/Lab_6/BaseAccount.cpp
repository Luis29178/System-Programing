#include "BaseAccount.h"
#include<iostream>



void BaseAccount::SetBalance(float nBalance)
{
	Balance = nBalance;
}

BaseAccount::BaseAccount()
{
	Balance = 50;
	Withdraws = 0;
}

BaseAccount::~BaseAccount()
{
	std::cout << "Base Account deleted" << std::endl;

}

void BaseAccount::Withdraw(float ammount)
{
	Balance -= ammount;
};
void BaseAccount::Deposit(float ammount)
{
	Balance += ammount;

}





