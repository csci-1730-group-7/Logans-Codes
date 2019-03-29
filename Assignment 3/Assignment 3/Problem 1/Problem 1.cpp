#include <pch.h>
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
		if (sign == '-') { b *= -1;}
	}
	void dispComplex()
	{
		if (a == 0) { cout << b << "i" << endl; }//if a is zero, it will not be outputted

		else {
			
			if (b < 0) { cout << a << b << i << endl; }
			else { cout << a << sign << b << i << endl; }

		}
	}

	//simple arthimatic functions
	Complex addComplex(Complex s);
	Complex subComplex(Complex s);
	Complex multComplex(Complex s);
	Complex divComplex(Complex s);

	//not so simple mierda 
	Complex checkEquality();
	void convertComplex()
	{
		cout << 0 << "+" << b << i;
	}
	

private:

	double a, b, c;
	char i='i', sign;
	bool negSign;

};

Complex::Complex() {}
Complex::Complex(double a, double b, double c, char i, char sign) {}

Complex Complex::addComplex(Complex s)
{
	Complex q;

	q.a = a + s.a;

	if (negSign == true) { q.b = (abs(b - s.b))*-1; }
	else{ q.b = b + s.b; }

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

Complex Complex::checkEquality( )
{
	Complex z;//store a,b,c values for quadratic equation... little bit of self hatred involved here.. what am I doing here?
	Complex q;//store input variables
	Complex c;//store conjugate of inputted complex number
	Complex s;//store negative roots
	Complex i;//store positive roots
	
	q.inputComplex( );

	if (q.sign == '-') { c.b = (q.b*-1); c.a = q.a; }//if the imaginary portion is negative, this will flip the conjugate's sign
	else {
		c.b = q.b; c.a = q.a;
	}

	cout << "Enter a: ";
	do {
		cin >> z.a; if (z.a == 0) { cout <<endl<< "a cannot be 0, please re-enter: "; }
	} while (z.a == 0);

	cout << "Enter b: ";
	cin >> z.b;
	cout << "Enter c: ";
	cin >> z.c;

	
	//declarations to get the coefficents correct

	z.c = ((z.b*z.b) + (-4.0*z.a*z.c));//defining c as the descriminant 

	if (z.c >= 0) { cout << "The complex number " << q.a << q.sign << q.b << "i" << " is not a solution to the quadratic equation\n" << endl; }
	
	else {
		z.c = z.c * -1.0;//change descriminant so it is not negative
		
		z.a = 2 * z.a;//a now equals 2 * a 
		
		z.b = (z.b*-1) / z.a;//-b in front of the quadratic equation
		
		z.c = (sqrt(z.c)) / z.a;// descriminant, imaginary portion of a+bi
	
		//collecting roots of quadratic equation 

		i.a = z.b;//real number
		i.b = z.c;//positive imaginary root
		s.a = z.b;//real number
		s.b = (z.c*-1);//negative imaginary root 

		//complex pairs from quadratic equation are : i.a + i.b , s.a - s.b 	
		//complex pairs for : q.a +- q.b , c.a +- q.b 
		//q.b will always be positive 

		//this if statment uses the 
		if ((abs(i.a - q.a) < 0.000001) && (abs(s.a - c.a) < 0.000001) && (abs(i.b - q.b) < 0.000001) && (abs(s.b) - abs(i.b)) < 0.000001) { cout << "The complex number " << q.a << q.sign << q.b << "i" << " is a solution to the quadratic equation\n" << endl; }
		
		else { cout << "The complex number " << q.a << q.sign << q.b << "i" << " is not a solution to the quadratic equation\n" << endl; }
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
			I.inputComplex( );
			cout << "Enter an operation (+, -, *, /)\n";
			cin >> operation;

			switch (operation)

			{
			case '+':
				N.inputComplex( );
				Q = I.addComplex(N);
				Q.dispComplex();
				break;
			case '-':
				N.inputComplex( );
				Q = I.subComplex(N);
				Q.dispComplex();
				break;
			case '*':
				N.inputComplex( );
				Q = I.multComplex(N);
				Q.dispComplex();
				break;
			case '/':
				N.inputComplex( );
				Q = I.divComplex(N);
				Q.dispComplex();
				break;
			default:
				cout << "Please enter a valid arithmetic operation\n";
			
				break;

			}//end of nested switch
			break;
		case 2:
			cout << "I am the problem";
			break;
		case 3:
			cout << "Exiting"; //sleep_seconds(2100);]]]]]]]]]]]]

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