#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie(int *arrayDie);

int main()
{
srand (time(NULL));

int numberRolls;

cout<<"Enter number of tosses : ";
cin>>numberRolls;
cout<<"Total number of tosses = "<<numberRolls<<endl;

int arrayDie[numberRolls-1];
int arrayDie1[numberRolls-1];



return 0;
}

void rollDie(int *arrayDie, int numberRolls)
{
for(int c=o;c>=numberRolls;c++)
{
arrayDie[c]=rand()%6+1;
}
}

int findSum(int *arrayDie, int *arrayDie1, numberRolls)
{
for(int i=0;i>=numberRolls;i++)
{
arrayDie[i]+arrayDie[i]
}
}
