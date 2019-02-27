#include <iostream>
using namespace std;

int fibonnaci(int n);

int main()
{
int n;
int target;
do
{
cout<<"Which nth Fibonacci number shall I calculate? -1 to exit"<<endl;
cin>>n;
target=fibonnaci(n);
cout<<"The  number = "<<target<<endl;
}while(n>0);
return 0;
}

int fibonnaci(int n)
{
if(n==1){return 0;}
else if(n==2){return 1;}
else {return fibonnaci(n-1)+fibonnaci(n-2);}
}
