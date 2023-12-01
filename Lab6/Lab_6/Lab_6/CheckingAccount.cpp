#include "CheckingAccount.h"




void CheckingAccount::Withdraw(float ammount)
{
	int _balance;
	if (Withdraws > 10)
	{
		_balance = GetBalance() - (ammount + 5);
		Withdraws++;
		SetBalance(_balance);
		
		 
		
	}
	else
	{
		_balance = GetBalance() - (ammount);
		Withdraws++;
		 SetBalance(_balance);
	}
	
};