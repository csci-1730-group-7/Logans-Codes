#include <iostream> 
#include <cmath>
using namespace std;

void cActions();
void vActions();

class Pairs
{
public:
	Pairs() { a = 0; b = 0; }
	Pairs(float n, float i) { a = n; b = i; }

	const Pairs operator- (Pairs& numberone);
	const Pairs operator+ (Pairs& numberone);
	
	//friend operator+ (Pairs n);
	//friend operator- (Pairs n);
	//friend operator== (Pairs n, Pairs i);
	
	//setters
	void setA(float n) { a = n; }
	void setB(float n) { b = n; }
	void setC(float n) { c = n; }
	
	//getters
	float getA() { return a; }
	float getB() { return b; }
	float getC() { return c; }

private:
	float a, b, c;
};
const Pairs operator+(Pairs& numberone){ }
//Pairs::Pairs() { a = 0; b = 0; c = 0; } does making these inline functions make these inherit better?
//Pairs::Pairs(float n, float i) { a = n; b = i; }
//___________________________________________________________________
class Complex : public Pairs
{
public:
	//default constructor
	Complex();
	Complex(double a, double b);

	//input functions
	//friend ostream &operator << (ostream &os, Complex &number);
	//friend istream &operator >> (istream &is, Complex &number);

	//simple arthimatic functions
	const Complex operator+(const Complex& numberOne);
	const Complex operator-(const Complex& numberOne);
	const Complex operator*(const Complex& numberOne);
	const Complex operator/(const Complex& numberOne);

	//not so simple mierda 
	Complex checkEquality();
	void convertComplex()
	{
		cout << 0 << "+" << b << i;
	}


private:

	double a, b, c;
	char i = 'i', sign;

};

//defualt constructors for the Complex class
Complex::Complex() { setA(0); setB(0); }
Complex::Complex(double a, double b) { setA(a); setB(b); }

//____________________________________________________________________________
class Vect : public Pairs
{
	//include overloaded multiplication and division
	//friend insertaion and extraction operators 
public:
	friend ostream& operator << (ostream& os, const Vect& number);
	friend istream& operator >> (istream& is, Vect& number);

	const int operator* (Vect n);//dot product 
	const int operator* (float n);//scalar multiplication 

	//include two overloaded multiplication operators 
	//friend input and output stuff

private:
	float a, b;
};
//______________________________________________________________________________
Pairs::Pairs() { a = 0; b = 0; }
Pairs::Pairs(Pairs n, Pairs i) { a = n.a; b = i.a; }

int main()
{
	int sel;
	do {
		cout << "Select an option - (1) perform complex number actions\n";
		cout << "                   " << "(2) perform vector actions\n";
		cout << "                   " << "(3) exit\n";
		cin >> sel;
		if (sel == 1)
			cActions();
		else if (sel == 2)
			vActions();
		else if (sel == 3)
			cout << "Bye...\n";
		else
			cout << "Invalid input - try again\n";
	} while (sel != 3);
	char ch; cin >> ch;
	return 0;
}

void cActions()
{
	int resp=0;
	switch (resp) {
	case 1:
		cout << "Enter a complex number: ";
		//
		break;
	case 2:
		cout << "Display a complex number: ";
		//
		break;
	case 3:
		cout << "Perform arithmatic or equality comparisons of complex numbers: ";
		//
		break;
	case 4:
		cout << "Bye...\n"; break;
		break;
	}
}

void vActions()
{
	int resp=0;
	switch (resp) {
	case 1:
		cout << "Enter a vector: ";
		//
		break;
	case 2:
		cout << "Display a vector: ";
		//
		break;
	case 3:
		cout << "Display a scalar: ";
		//
		break;
	case 4:
		cout << "Perform arithmatic or equality comparisons of vectors: ";
		//
		break;
	case 5:
		cout << "Bye...\n"; break;
		break;
	}
}



//placeholder