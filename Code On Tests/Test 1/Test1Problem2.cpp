#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "Enter score: ";
	cin >> score;
	score = score / 10;

	switch (score)
	{
	case 9:
		cout << "This is an A";
		break;
	case 8:
		cout << "This is a B";
		break;
	case 7:
		cout << "This is a C";
		break;
	case 6:
		cout << "This is a D";
		break;
	default:
		cout << "This is an F";
	}
	return 0;
}
