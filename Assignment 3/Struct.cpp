#include <iostream>
#include <string>
using namespace std;

void setFunction(int n);

class points
{
public:
void setFunction(int n){x=n;}
int getFunction(){return x;}

private:
int x;
};

int main()
{
points n;
int c;

cin>>c;
n.setFunction(c);
cout<<n.getFunction();

cout<<endl;
return 0;
}


