#include <iostream>
using namespace std;

int main()
{
int label=1;
float number, sum=0, numberToBeat, max, counter;
cout<<"Enter a positive number: ";
do{
cin>>counter;
if(counter<0){
cout<<"Please enter a positive number.\n";}
}while(counter<0);

cout << "Enter float 1: ";
cin>>numberToBeat;
max=numberToBeat;
sum+=numberToBeat;
for(int i=2;i<=counter;i++)
{
cout<<"Enter float "<<++label<<" : ";
cin>>number;
sum=sum+number;

if((number>numberToBeat) && (number>max))
{
max=number;
}
}
cout<<"The sum is: "<<sum<<endl;
cout<<"The maximum number is: "<<max<<endl;
return 0;
}
