#include <iostream>

using namespace std;
const double PI=3.141592654;

void input(float &d);
void input(float &l, float &w);
void input(float &a, float &b, float &c);
float perim(float d1);
float perim(float l1, float w1);
float perim(float a1, float b1, float c1);


main()
{
int decision;
float a2,b2,c2,d2,l2,w2, circlePerim, rectPerim, triPerim;
do{
cout<<"Select shape (1=circle, 2=rectangle, 3=triangle, other to exit)\n";
cin>>decision;
switch(decision)
{
case 1:
input(d2);
circlePerim=perim(d2);	
cout<<"The preimeter of the circle is: "<<circlePerim<<endl;
break;

case 2:
input(l2,w2);
rectPerim=perim(l2,w2);
cout<<"The preimeter of the rectangle is: "<<rectPerim<<endl;
break;

case 3:
input (a2,b2,c2);
triPerim=perim(a2,b2,c2);
cout<<"The perimeter of the triangle is: "<<triPerim<<endl;
break;	

default:
cout<<"Bye...\n";
break;
}
}while (decision==1 || decision==2 || decision==3);

}
void input(float &d)
{
cout<<"Enter circle diameter: \n";
cin>>d;
}
void input(float &l, float &w)
{
cout<<"Enter rectangle length and width: \n";
cin>>l>>w;
	
}
void input(float &a, float &b, float &c)
{
cout<<"Enter triangle side lengths: \n";
cin>>a>>b>>c;	
}

float perim(float d1)
{
float perimeter;
perimeter=PI*d1;
return perimeter;
}
float perim(float l1, float w1)
{
float perimeter;
perimeter=2*l1*w1;
return perimeter;
}
float perim(float a1, float b1, float c1)
{
float perimeter;
perimeter=a1+b1+c1;
return perimeter;
}

