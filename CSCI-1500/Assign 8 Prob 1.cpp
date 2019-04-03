//Prompts the user to type the of a Canadian city
//and a Canadian province
#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;
string province(string abbs);
//accepts province abbr. and returns province name
int main()
{
	string city, abbs; //province city
	string whole; //province abbreviation and city,province
	cout << "Enter city: ";
	getline(cin,city);
	cout <<"Enter Province abbreviation: ";
	getline(cin,abbs);
	whole=city+ ", " +province(abbs);
	cout<<" You entered: " << whole;
	return 0;
}	
string province(string province1)
{
	string returnvalue;
{
	if (province1=="AB")
	returnvalue="Alberta";
	else if (province1=="BC")
	returnvalue="British Columbia";
	else if (province1=="MB")
	returnvalue="Manitoba";
	else if (province1=="NB")
	returnvalue="New Brunswick";
	else if (province1=="NF")
	returnvalue="Newfoundland";
	else if (province1=="NS")
	returnvalue="Nova Scotia";
	else if (province1=="NT")
	returnvalue="Northwestern Territories";
	else if (province1=="ON")
	returnvalue="Ontario";
	else if (province1=="PE")
	returnvalue="Prince Edward Island";
	else if (province1=="PQ")
	returnvalue="Quebec";
	else if (province1=="SK")
	returnvalue="Saskatchewan";
	else if (province1=="YK")
	returnvalue="Yukon";
	else
	returnvalue="Unknown Province";
}
return returnvalue;
}


