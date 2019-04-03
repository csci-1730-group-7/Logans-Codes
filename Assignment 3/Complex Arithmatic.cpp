#include <iostream>
#include <cmath>
#include <windows.h>
void sleep_seconds (const float sleepMSs) {Sleep(sleepMSs * 1000); }

using namespace std;

class Complex
{
public:
	//default constructor
	Complex( );
	Complex(double a, double b, double c, char i, char sign);

	//input functions
	void inputComplex( )
	{
		cout<<"Enter a complex number a+bi\n";
		cin>>a>>sign>>b>>i;
		if(sign=='-'){b*=-1;}
	}
	void dispComplex( )
	{
		if(a==0){cout<<b<<"i"<<endl;}//if a is zero, it will not be outputted
		
		else{
			if(negSign==true){cout<<a<<"+"<<b<<"i"<<endl;}//I have no clue what these 3 
			else{cout<<a<<"+"<<b<<"i"<<"1"<<endl;}//statements do but they work..
			}
	}

	//simple arthimatic functions
	Complex addComplex(Complex s);
	Complex subComplex(Complex s);
	Complex multComplex(Complex s);
	Complex divComplex(Complex s);

	//not so simple mierda 
	void convertComplex( );
	Complex checkEquality(Complex s);

private:

	double a,b,c;
	char i, sign;
	bool negSign;

};

struct quadPlusMinus
{



};

Complex::Complex(){}
Complex::Complex(double a, double b, double c, char i, char sign){}

Complex Complex::addComplex(Complex s)
{
	Complex q;

	q.a=a+s.a;
	q.b=b+s.b;

	if(s.sign=='-'){q.negSign=true;}
	else if(q.sign=='i'){q.negSign=true;}
	else{q.negSign=false;}

	return q;
}

Complex Complex::subComplex(Complex s)
{
	Complex q;

	q.a=a-s.a;
	q.b=b-s.b;

	if(b-s.b>0){q.negSign=false;}

	return q;
}

Complex Complex::multComplex(Complex s)
{
	Complex q;
	
	q.a=((a*s.a)-(b*s.b));
	q.b=((a*s.b)+(b*s.a));
	
	return q;
}

Complex Complex::divComplex(Complex s)
{
	Complex q;
	
	q.a=((a*s.a)+(s.b*b))/((s.a*s.a)+(s.b*s.b));
	q.b=((b*s.a)-(a*s.b))/((s.a*s.a)+(s.b*s.b));

	return q;
}

Complex Complex::checkEquality(Complex s)
{
	Complex q,q1;
	double des, x1,x2;
	float a1,b1,c1;	

	q.inputComplex();	

	cout<<"Enter a: \n";
	cin>>a1;
	cout<<"Enter b: \n";
	cin>>b1;
	cout<<"Enter c: \n";
	cin>>c1;

	des=(b1*b1)+(-4.0*a1*c1);

	if(des>0)
	{
	cout<<"This is not a solution\n";
	}
	else 
	{
	des=des*-1.0;
	b=sqrt(des);
	a=a1;
	s.a*=-1;
	
	if((q.a-s.a<0.000001)&&(q.b-s.b<0.000001))
{
cout<<"This is a solution\n";
}

	}
		
	return q;
	}

int main()
{
	Complex I,N,Q;
	char operation;
	int resp;

	do
	{
		cout<<"Select an option - (1) perform complex number arithmetic\n";
		cout<<"                   "<<"(2) check for quadratic equation solution\n";
		cout<<"                   "<<"(3) exit\n";
		cin>>resp;
		switch(resp)

		{
			case 1:
			I.inputComplex();
			cout<<"Enter an operation (+, -, *, /)\n";
			cin>>operation;
			
			switch(operation)

			{
				case '+':
				N.inputComplex();
				Q=I.addComplex(N);
				Q.dispComplex();
				break;
				case '-':
				N.inputComplex();
				Q=I.subComplex(N);
				Q.dispComplex();
				break;
				case '*':
				N.inputComplex();
				Q=I.multComplex(N);
				Q.dispComplex();
				break;
				case '/':
				N.inputComplex();
				Q=I.divComplex(N);
				Q.dispComplex();
				break;
				default:
				cout<<"Please enter a valid arithmetic operation\n";
				break;

			}//end of nested switch

			case 2:
			Q.checkEquality( );
			
			break;
			case 3:
			cout<<"Exiting";sleep_seconds(0.2);
			cout<<".";sleep_seconds(0.2);
			cout<<".";sleep_seconds(0.2);
			cout<<".";sleep_seconds(0.2);
			break;
			default:
			cout<<"I cannot do that at this time\n";
			break;

		}//end of switch statement

	}while(resp!=3);

return 0;
}
