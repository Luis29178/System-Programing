#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "CreditAccount.h"
#include "SavingAccount.h"
#include "Helper.h"

#include <iostream>

int main()
{
	CheckingAccount* Checking = new CheckingAccount();
	CreditAccount* Credit = new CreditAccount();
	SavingAccount* Savings = new SavingAccount();
	int Choice;
	float Dipos;
	float wdra;
	float balance;
	int crChoice;
	int cChoice;
	int sChoice;
	bool applogic = true;
	

	while (applogic)
	{
		system("CLS");
		std::cout << "\tAccaunts" << '\n' << "1) Checkings Account\n\n" << "2) Savings Account\n\n" << "3) Credit Account\n\n" << "4) Exit\n" << std::endl;
		Choice = GetValidatedInt("Choice", 0, 5);
		bool menulogic = true;

		switch (Choice)
		{
			


		case 1:
			while (menulogic)
			{
				system("CLS");
				std::cout << "\tActions\n" << "1) Check Balance\n\n" << "2) Deposit\n\n" << "3) Withdraw\n\n" << "4) Return\n" << std::endl;
				cChoice = GetValidatedInt("Choice", 0, 5);
			switch (cChoice)
			{
			case 1:
				balance = Checking->GetBalance();
				std::cout << balance<<std::endl;
				system("pause");
				break;
			case 2:
				Dipos = GetValidatedInt("Diposit Ammount", 0, INT_MAX);
				Checking->Deposit(Dipos);
				std::cout << "Confirmed Deposit of " << Dipos << " with a new outstanding balance of " << Checking->GetBalance() << "\n"<< std::endl;
				system("pause");
				break;
			case 3:
				wdra = GetValidatedInt("Withdraw Ammount", 0, INT_MAX);
				Checking->Withdraw(wdra);
				std::cout << "You withdrew a total of " << wdra << " your new outstanding balance is " << Checking->GetBalance() << std::endl;
				system("pause");
				break;
			case 4:
				menulogic = false;
				break;
			default:
				break;
			}
			}
			break;
		case 2:

			while (menulogic)
			{
				system("CLS");
				std::cout << "\tActions\n" << "1) Check Balance\n\n" << "2) Deposit\n\n" << "3) Withdraw\n\n" << "4) Return\n" << std::endl;
				sChoice = GetValidatedInt("Choice", 0, 5);

				switch (sChoice)
				{
				case 1:
					balance = Savings->GetBalance();
					std::cout << balance;
					system("pause");
					break;
				case 2:
					Dipos = GetValidatedInt("Diposit Ammount", 0, INT_MAX);
					Savings->Deposit(Dipos);
					std::cout << "Confirmed Deposit of " << Dipos << " with a new outstanding balance of " << Savings->GetBalance() << std::endl;
					system("pause");
					break;
				case 3:
					wdra = GetValidatedInt("Withdraw Ammount", 0, INT_MAX);
					Savings->Withdraw(wdra);
					std::cout << "You withdrew a total of " << wdra << " your new outstanding balance is " << Savings->GetBalance() << std::endl;
					system("pause");
					break;
				case 4:
					menulogic = false;
					break;
				default:
					break;
				}
			}
			break;
		case 3:
			while (menulogic)
			{
				system("CLS");
				std::cout << "\tActions\n" << "1) Check Balance\n\n" << "2) Make Payment\n\n" << "3) Withdraw\n\n" << "4) Return\n" << std::endl;
				crChoice = GetValidatedInt("Choice", 0, 5);
				
				switch (crChoice)
				{
				case 1:
					balance = Credit->GetBalance();
					std::cout << balance;
					system("pause");
					break;
				case 2:
					Dipos = GetValidatedInt("Diposit Ammount", 0, INT_MAX);
					Credit->Deposit(Dipos);
					std::cout << "Confirmed Deposit of " << Dipos << " with a new outstanding balance of " << Credit->GetBalance() << std::endl;
					system("pause");
					break;
				case 3:
					wdra = GetValidatedInt("Withdraw Ammount", 0, INT_MAX);
					Credit->Withdraw(wdra);
					std::cout << "You withdrew a total of " << wdra << " your new outstanding balance is " << Credit->GetBalance() << std::endl;
					system("pause");
					break;
				case 4:
					menulogic = false;
					break;
				default:
					break;
				}
			}
			break;
		case 4:
			
			applogic = false;
			break;

		default:
			break;
		}

	}
}

