#include <iostream>
#include <cmath>
using namespace std;

float sumOfRoots(float n)
{
	if (n == 1) { return 1; }
	else { return sumOfRoots(sqrt(n - 1) + sqrt(n - 2)); }
}

int main()
{
	float n;
	cout << "Enter N: ";
	cin >> n;
	sumOfRoots(n);
	cout << n;

	return 0;
}