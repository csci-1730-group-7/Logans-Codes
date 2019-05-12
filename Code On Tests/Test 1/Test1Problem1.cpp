#include <iostream>
using namespace std;

int main()
{
	int int1, int2, int3;
	int int4 = 3;
	int int5 = 15;
	double double1, double2;
	int1 = 1 / 2; 
	int2 = 3 / 2.0;
	int3 = 5.0 / 2.0; 
	double1 = 1 / 2; 
	double2 = 3 / 2.0; 
	cout << int1 << endl; //0
	cout << int2 << endl; //1
	cout << int3 << endl; //2
	cout << double1 << endl; //0
	cout << double2 << endl; //1.5
	cout << int4++ << endl; //3
	cout << ++int4 << endl; //5
	cout << int5 % 4 << endl; //3
	int5 *= 2; //30
	cout << int5 << endl; //30
	cout << "Jan Feb Mar\nApr May\nJun Jul";
	cout << "Aug Sep\nOct Nov Dec";
	cout << 'X' << endl;
	return 0;
}
//============================//
//output from other statements//
/*
Jan Feb Mar
Apr May
Jun Jul Aug Sep
Oct Nov DecX
*/