#pragma once
#include "BaseAccount.h"


class CreditAccount : public BaseAccount
{
public:
	void Withdraw(float ammount);
	void Deposit(float ammount);
};

