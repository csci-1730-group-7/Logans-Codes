#include <iostream>
using namespace std;

int main()
{
int counter;
float number;
float sum=0;
float average;
int numNum;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(16);

cout<<"Enter number of numbers:\n";
cin>>numNum;
cout<<"Enter numbers below: \n";
for(counter=1;counter<=numNum;counter++)
{
cout<<"Enter number\n";
cin>>number;
sum=sum+number;
}
average=sum/numNum;
cout<<"The average is: "<<average<<endl;
return 0;
}

