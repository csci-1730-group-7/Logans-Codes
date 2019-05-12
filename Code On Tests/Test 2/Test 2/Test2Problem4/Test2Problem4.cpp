#include <iostream>
using namespace std;

int main()
{
	float holder[100];
	int label = 2;
	int counter = 1;
	int inputVar;
	int i = 1;
	float middle;
	float oddCounter;
	cout << "Enter positive float #1: ";
	cin >> holder[0];
	
	do {
		cout << "Enter positive float #" << label << " " << "(0 to stop) : ";
		cin >> inputVar;
		if (inputVar != 0) { holder[i] = inputVar; label++; counter++; i++;}
		
	} while ((inputVar != 0) && (counter!=100));
	
	cout << "Number of numbers entered = " << label - 1 << endl;

	if ((counter % 2) == 0) { 
	
		counter /= 2; 
		middle = (holder[counter] + holder[counter - 1]) / 2.0; 
		cout << "Median = " << middle;
		
	}
	else {
		oddCounter = counter / 2.0; oddCounter += 0.5; counter = oddCounter; cout <<"<Median = "<< holder[counter-1];
	}

	return 0;
}
