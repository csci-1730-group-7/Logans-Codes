#include <iostream>
using namespace std;

const float C=12.57;
const float R=4;

int main()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(20);	
double pi=C/R;

cout<<pi;
	
}
