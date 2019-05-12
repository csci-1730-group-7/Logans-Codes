#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	ofstream tuna;
	ifstream fish;
	string hello;
	
	tuna.open("tuna.txt");
	tuna << "Hello";
	if(tuna.is_open()==true)
	{
	while(getline(fish,hello))
	{
		cout << hello << endl;
	}
	}
	
	
	
	tuna.close();	

	return 0;
}
