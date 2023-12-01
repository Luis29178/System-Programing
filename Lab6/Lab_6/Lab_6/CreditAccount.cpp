#include "CreditAccount.h"


void CreditAccount::Withdraw(float ammount)
{
	int _balance;
	if ((GetBalance()+ammount) > 40)
	{
		_balance = (GetBalance() + 5000)+ammount;
		SetBalance(_balance);
	}
	else
	{
		_balance = GetBalance() + ammount;
		SetBalance(_balance);

	}
}
void CreditAccount::Deposit(float ammount)
{
	int _balance;
	_balance = (GetBalance() - ammount);
	SetBalance(_balance);

}
