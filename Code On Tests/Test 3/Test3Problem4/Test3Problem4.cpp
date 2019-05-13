#include <iostream>
using namespace std;

void readNum(double* dArray, int number);
float average(double* dArray, int number);
float greaterAvg(float average, double* dArray, int number);

int main()
{
	float averageSum, sum = 0;
	int number, numGreater;

	cout << "How many numbers do you want to enter? ";
	cin >> number;
	double* dArray = new double[number];

	readNum(dArray, number);
	averageSum = average(dArray, number);
	cout << "Average = " << averageSum << endl;
	numGreater = greaterAvg(averageSum, dArray, number);
	cout << "Number entered greater than average = " << numGreater << endl;

	return 0;
}

void readNum(double *dArray, int number)
{
	int counter = 1;

	for (int i = 0; i < number; i++)
	{
		cout << "Enter number " << counter++ << ": ";
		cin>> *(dArray + i);
	}
}

float average(double *dArray,int number)
{
	float average, sum = 0;
	for (int i = 0; i < number; i++)
	{
		sum += *(dArray + i);
	}
	average = (sum / number);

	return average;
}

float greaterAvg(float average, double *dArray, int number)
{
	int numGreater = 0;
	for (int i = 0; i < number; i++)
	{
		if ((*(dArray + i)) > average) { numGreater++; }
	}
	return numGreater;
}