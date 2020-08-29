#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{

	int openBalance;
	cout << "enter the amount you want to start anurag account with? \n";
	cin >> openBalance;
	account anurag(openBalance);
	int paisa;
	cout << "enter the amount you want to add in anurag's account? \n";
	cin >> paisa;
	anurag.Credit(paisa);
	cout << anurag.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein anurag's account? \n";
	cin >> paisa1;
	anurag.Debit(paisa1);
	cout << anurag.getBalance() << "\n";
	cout << "enter the amount you want to start tanmay account with? \n";
	cin >> openBalance;
	account tanmay(openBalance);
	cout << "enter the amount you want to add in tanmay's account? \n";
	cin >> paisa;
	tanmay.Credit(paisa);
	cout << tanmay.getBalance() << "\n";
	cout << "enter the amount you want to removein tanmay's account? \n";
	cin >> paisa1;
	tanmay.Debit(paisa1);
	cout << tanmay.getBalance() << "\n";
	return 0;
}
