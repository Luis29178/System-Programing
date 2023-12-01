#pragma once
class BaseAccount
{
private:
	float Balance = 0;

protected:
	int Withdraws = 0;

	void SetBalance(float nBalance);

public:
	BaseAccount();
	~BaseAccount();
	virtual void Withdraw(float ammount) = 0;
	virtual void Deposit(float ammmount);
	float GetBalance() { return Balance; };

	

};

