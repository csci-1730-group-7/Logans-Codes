#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float a,b,c;
float des;
float x1,x2;
float imA,imB,imDes;
cout<<"Quadratic Equation Solver:\n";
cout<<"Enter a: \n";
do{
cin>>a; if(a==0){cout<<"a cannot be 0, please re-enter\n";}
}
while(a==0);

cout<<"Enter b: \n";
cin>>b;
cout<<"Enter c: \n";
cin>>c;

des=(b*b)+(-4.0*a*c);

if(sqrt(des)>0){
	x1=((b*-1)+sqrt(des))/(2*a);
	x2=((b*-1)-sqrt(des))/(2*a);
	cout<<"There are two real solutions: "<<x1<<" and "<<x2<<endl;
	}
else if(sqrt(des)==0){
	if(b>0){cout<<((b*-1)+sqrt(des))/(2*a);}
	else{cout<<"There is one real solution: "<<((b*-1.0)-sqrt(des))/(2.0*a);}}
else{
	des=des*-1.0;
	imA=2*a;
	imB=(b*-1)/imA;
	imDes=(sqrt(des))/imA;
	cout<<"Two imaginary solutions: "<<imB<<"-"<<imDes<<"i"<<" and "<<imB<<"+"<<imDes<<"i"<<endl;
	}
return 0;
}
