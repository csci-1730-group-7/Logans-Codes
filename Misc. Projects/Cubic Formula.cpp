#include <iostream>
#include <cmath>
using namespace std;

float qubicFunction(float a1, float b1,float c1,float d1);

int main()
{
float a, b,c,d;


cout<<"Cubic Formula calculator\n";
cout<<endl;
cout<<"For the equation ax^3+bx^2+cx+d=0, enter coefficents\n";

do
{
cout<<"Enter a: ";
cin>>a;
if(a==0){cout<<"a cannot be 0, please re enter";}
}while(a==0);
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;
cout<<"Enter d: ";
cin>>d;
qubicFunction(a,b,c,d);
return 0;
}
float qubicFunction(float a, float b,float c,float d)
{
float firstPara;
float secondPara;
float thirdPara;
float fourthPara;
float fifthPara;
float sixthPara;
float lastThingy;
float firstInnerRoot;
float secondInnerRoot;
float firstLargeCubeRoot;
float secondLargeCubeRoot;
float entireFormula;

firstPara=((b*b*b*-1.0)/(27.0*(a*a*a)))+((b*c)/(6.0*(a*a)))-(d/2*a);
secondPara=((b*b*b*-1.0)/(27.0*(a*a*a)))+((b*c)/(6.0*(a*a)))-(d/2*a);
thirdPara=(c/(3.0*a))-((b*b)/(9*(a*a)));
fourthPara=((b*b*b*-1.0)/(27.0*(a*a*a)))+((b*c)/(6.0*(a*a)))-(d/2*a);
fifthPara=((b*b*b*-1.0)/(27.0*(a*a*a)))+((b*c)/(6.0*(a*a)))-(d/2*a);
sixthPara=(c/(3.0*a))-((b*b)/(9*(a*a)));
lastThingy=b/(2*a);

firstInnerRoot=sqrt((secondPara*secondPara)+(thirdPara*thirdPara*thirdPara));
firstLargeCubeRoot=cbrt(firstPara+firstInnerRoot);
secondInnerRoot=sqrt(secondPara*secondPara)+(thirdPara*thirdPara*thirdPara);
secondLargeCubeRoot=cbrt(fourthPara-secondInnerRoot);
entireFormula=firstLargeCubeRoot+secondLargeCubeRoot-lastThingy;
cout<<entireFormula;
}




