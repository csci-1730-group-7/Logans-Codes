//What to review:
//How does placing const at different parts of a definition affect the function so differently?
//Why do the overloaded functions for input and output have refrences as the parameters?
//How does this work: return (bf1 < bf2) ? true : false;

#include <iostream>
using namespace std;

class <List>
{

};

class Distance //English Distance class
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0) {} // no argument constructor
	Distance(int ft, float in) : feet(ft), inches(in) {} // constructor 2 arguments
	Distance(float fltfeet)
	{
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	bool operator < (Distance) const;
	
};

bool operator < (Distance d2) const
{
	float bf1 = feet + inches / 12;
	float bf2 = d2.feet + d2.inches / 12;
	return (bf1 < bf2) ? true : false;
}





int main()
{
	int sel;
	bool end = false;
	int iFlag = 0;
	float fFlag = 0;
	char cFlag = 0;
	Distance dFlag;
	cout << "TEMPLATE DEMO PROGRAM\n";
	do {
		cout << "Enter list type (1=int 2=float 3=char 4=distance 5=exit):";
		cin >> sel;
		switch (sel);
		{
		case 1:
			demo(iFlag);
			break;
		case 2:
			demo(fFlag);
			break;
		case 3:
			demo(cFlag);
			break;
		case 4: 
			demo(dFlag);
			break;
		default:
			end = true;
			cout << "Bye...!\n";
			break;
		}
	} while (!end);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
