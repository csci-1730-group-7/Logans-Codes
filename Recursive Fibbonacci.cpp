#include <iostream>
using namespace std;

int fibonnaci(int n);

int main()
{
int n;
int target;

cout<<"Which Fibonacci number shall I calculate?"<<endl;
cin>>n;
target=fibonnaci(n);
cout<<"The target number = "<<target;

return 0;
}

int fibonnaci(int n)
{
if(n==1){return 0;}
else if(n==2){return 1;}
else {return fibonnaci(n-1)+fibonnaci(n-2);}
}
