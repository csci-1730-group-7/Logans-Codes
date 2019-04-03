#include <iostream>
using namespace std;
//prompts user for an amount of money, an interest rate, and then calculates how many years
//it would take to obtain an inputted amount of money

double compound (double deposit1, double rate1, double amount1, int& years){

    double balance = deposit1 + deposit1*(rate1/100.0);
    years++;

    if (balance > amount1)
        return balance;
    else{
        return(compound(balance, rate1, amount1, years));
    }
}

int main(){
//user data is inputted and used in compound function

    double input, amount, rate, endMoney;
    int years = 0;

    cout<<"Enter initial deposit: $";
    cin>>input;
    cout<<"Enter interest rate (%): ";
    cin>>rate;
    cout<<"Enter desired end amount: $";
    cin>>amount;

    endMoney=compound(input, rate, amount, years);

    cout<<"It will take "<<years<<" years to reach ending balance of "<<endMoney<<endl;

    return 0;
}

