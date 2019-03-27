#inu7clude <pch.h>
#include <iostream>
#include <cmath>
#include <windows.h>
void sleep_seconds(const int sleepMSs) { Sleep(sleepMSs); }

using namespace std;

class Complex
{
public:
	//default constructor
	Complex();
	Complex(double a, double b, double c, char i, char sign);

	//input functions
	void inputComplex()
	{
		cout << "Enter a complex number a+bi\n";
		cin >> a >> sign >> b >> i;
		if (sign == '-') { b *= -1; }
	}
	void dispComplex()
	{
		if (a == 0) { cout << b << "i" << endl; }//if a is zero, it will not be outputted

		else {
			if (negSign == true) { cout << a << "+" << b << "i" << endl; }//I have no clue what these 3 
			else { cout << a << "+" << b << "i" << "1" << endl; }//statements do but they work..
		}
	}

	//simple arthimatic functions
	Complex addComplex(Complex s);
	Complex subComplex(Complex s);
	Complex multComplex(Complex s);
	Complex divComplex(Complex s);

	//not so simple mierda 
	void convertComplex();
	Complex checkEquality(Complex s, Complex i);

private:

	double a, b, c;
	char i, sign;
	bool negSign;

};

Complex::Complex() {}
Complex::Complex(double a, double b, double c, char i, char sign) {}

Complex Complex::addComplex(Complex s)
{
	Complex q;

	q.a = a + s.a;
	q.b = b + s.b;

	if (s.sign == '-') { q.negSign = true; }
	else if (q.sign == 'i') { q.negSign = true; }
	else { q.negSign = false; }

	return q;
}

Complex Complex::subComplex(Complex s)
{
	Complex q;

	q.a = a - s.a;
	q.b = b - s.b;

	if (b - s.b > 0) { q.negSign = false; }

	return q;
}

Complex Complex::multComplex(Complex s)
{
	Complex q;

	q.a = ((a*s.a) - (b*s.b));
	q.b = ((a*s.b) + (b*s.a));

	return q;
}

Complex Complex::divComplex(Complex s)
{
	Complex q;

	q.a = ((a*s.a) + (s.b*b)) / ((s.a*s.a) + (s.b*s.b));
	q.b = ((b*s.a) - (a*s.b)) / ((s.a*s.a) + (s.b*s.b));

	return q;
}

Complex Complex::checkEquality(Complex s, Complex i)
{
	Complex q;

	q.inputComplex();

	cout << "Enter a: \n";
	cin >> a;
	cout << "Enter b: \n";
	cin >> b;
	cout << "Enter c: \n";
	cin >> c;
 
	if ( ((b*b) + (-4 * a*c)) > 0) { cout << "The inputted complex number is not part of the solution as it is not imaginary\n"; }

	else {
		s.a = (b*(-1));
		s.b = sqrt((((b*b) + (-4 * a*c))*(-1)));

		i.a = (b*(-1));
		i.b = (sqrt((((b*b) + (-4 * a*c))*-1))*(-1));

		cout << "s.a= " << s.a << "s.b= " << s.b << "i.a= " << i.a << "i.b= " << i.b;



		//if( (abs(q.a-s.a)<0.000001) && (abs(q.b-s.b)<0.000001) && (abs(q.a - i.a) < 0.000001 ) && (abs(q.b - i.b) < 0.000001) ) {cout<<"The complex number is a solution to the quadratic equation\n"; }
		
		
		//else {cout<<"This complex number is not a part of the solution to the quadratic equation\n"; }

		}


	return q;
}

int main()
{
	Complex I, N, Q;
	char operation;
	int resp;

	do
	{
		cout << "Select an option - (1) perform complex number arithmetic\n";
		cout << "                   " << "(2) check for quadratic equation solution\n";
		cout << "                   " << "(3) exit\n";
		cin >> resp;
		switch (resp)

		{
		case 1:
			I.inputComplex();
			cout << "Enter an operation (+, -, *, /)\n";
			cin >> operation;

			switch (operation)

			{
			case '+':
				N.inputComplex();
				Q = I.addComplex(N);
				Q.dispComplex();
				break;
			case '-':
				N.inputComplex();
				Q = I.subComplex(N);
				Q.dispComplex();
				break;
			case '*':
				N.inputComplex();
				Q = I.multComplex(N);
				Q.dispComplex();
				break;
			case '/':
				N.inputComplex();
				Q = I.divComplex(N);
				Q.dispComplex();
				break;
			default:
				cout << "Please enter a valid arithmetic operation\n";
				break;

			}//end of nested switch

		case 2:
			Q.checkEquality(I,N);

			break;
		case 3:
			cout << "Exiting"; //sleep_seconds(2100);
			/*cout << "."; sleep_seconds(2100);
			cout << "."; sleep_seconds(2100);
			cout << "."; sleep_seconds(2100);*/
			break;
		default:
			cout << "I cannot do that at this time\n";
			break;

		}//end of switch statement

	} while (resp != 3);

	return 0;
}