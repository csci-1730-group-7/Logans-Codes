#include <iostream>
using namespace std;

class BankAccount
{
public:
	BankAccount() { balance = 0; } //default constructor

	void showBalance();
	void deposit();
	void withdraw();

private:
	float balance;
};

void BankAccount::showBalance()
{
	cout << "Account balance = " << balance;
}

void BankAccount::deposit()
{
	float n;
	cout << "Enter deposit amount: ";
	do {
		cin >> n;
		if (n < 0) { cout << "You cannot deposit a negative amount. Please re-enter"; }
	} while (n < 0);
	balance += n;
}

void BankAccount::withdraw()
{

}
int main()
{
	BankAccount acct;
	int sel;
	do {
		cout << "\nEnter your selection:\n";
		cout << "1 - Show balance\n";
		cout << "2 - Deposit\n";
		cout << "3 - Withdrawl\n";
		cout << "4 - Exit\n";
		cout << "Selection => ";
		cin >> sel;
		switch (sel)
		{
		case 1:
			acct.showBalance();
			break;
		case 2:
			acct.deposit();
			break;
		case 3:
			acct.withdraw();
			break;
		case 4:
			cout << "Bye..." << endl; break;
		default:cout << "Invalid - try again\n";
		}
	} while (sel != 4);
	return 0;
}