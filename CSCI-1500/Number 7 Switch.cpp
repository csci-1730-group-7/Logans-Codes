#include <iostream>
using namespace std;

int main()
{
int balance=200, withdrawl, deposit, newBalance;
char decision, ans;

cout<<"What would you like to do?(W)ithdraw (D)eposit (B)alance (E)xit"<<endl;

cin>>decision;

do
{
switch (decision)
	{
	case 'W':
		cout<<"How much?"<<endl;
		cin>>withdrawl;
		if (withdrawl<balance)
		{
 		balance=balance-withdrawl;
		 cout<<"The balance now is:"<<balance<<endl;
		}
		else if(withdrawl>balance)
		{
			cout<<"You cannot overdraw! Your current balance=$"<<balance<<"."<<" "<<"Please enter another amount."<<endl;
			cin>>withdrawl;
			balance=balance-withdrawl;
			cout<<"The balance now is"<<" "<<"$"<<balance-withdrawl<<"."<<" "<<"Have a good day!"<<endl;
		}	
		 	
	break;
	case 'D':
		cout<<"How much?"<<endl;
		cin>>deposit;
		if (deposit>0)
		{
			balance=deposit+balance;
			cout<<"the total now is:"<<" "<<balance<<endl;
		}
		else
		{
			cout<<"Please enter a positive amount";
			cin>>deposit;
			balance=deposit+balance;
			cout<<"the total now is:"<<" "<<balance+deposit<<endl;
		}
	break;
	default:cout<<"Error. Please try again";
	case 'B':
	cout<<"Balance=$"<<balance<<endl;
	break;
	case'E':
	exit(-1);
	break;




}
 cout<<"Proceed? Y or N"<<endl;
 cin>>ans;

cout<<"(W)ithdraw (D)eposit (B)alance (E)xit"<<endl;
cin>>decision;
}while (ans == 'y' || ans == 'Y');
if(ans =='n' || ans =='N');
			exit(-1);

return 0;
}
