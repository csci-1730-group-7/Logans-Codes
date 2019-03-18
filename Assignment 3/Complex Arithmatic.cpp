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
	Complex(double a, double b, char i, char sign);

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
		if(negSign==true){cout<<a<<b<<"i"<<endl;}//I have no clue what these 3 
		else{cout<<a<<"+"<<b<<"i"<<endl;}//statements do but they work..
		if(a==0){cout<<b<<"i"<<endl;}//somehow 
			}
	}

	//simple arthimatic functions
	Complex addComplex(Complex s);
	Complex subComplex(Complex s);
	Complex multComplex(Complex s);
	Complex divComplex(Complex s);

	//not so simple mierda 
	void convertComplex( );
	void checkEquality( );

private:

	double a,b;
	char i, sign;
	bool negSign;

};

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

Complex Complex::divComplex(Complex s)
{
	Complex q;
	
	q.a=a*s.a;
	
}

Complex::Complex(){}
Complex::Complex(double a, double b, char i, char sign){}

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
			cout<<"Enter an operation (+, -, *, /)\n";
			cin>>operation;
			switch(operation)

			{
				case '+':
				I.inputComplex();
				N.inputComplex();
				Q=I.addComplex(N);
				Q.dispComplex();
				break;
				case '-':
				I.inputComplex();
				N.inputComplex();
				Q=I.subComplex(N);
				Q.dispComplex();
				break;
				case '*':
				//
				break;
				case '/':
				//
				break;
				default:
				cout<<"Please enter a valid arithmetic operation\n";
				break;

			}//end of nested switch

			case 2:
			//
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
