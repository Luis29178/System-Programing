#include "SavingAccount.h"
#include <iostream>


void SavingAccount::Withdraw(float ammount)
{	
	int _balance;
	if (Withdraws > 3)
	{
		ammount = 0;
		std::cout << "You may not withdraw mor than 3 times." << std::endl;	
	}
	else
	{
		_balance = (GetBalance() - ammount);
		Withdraws++;
		SetBalance(_balance);

	}
};

