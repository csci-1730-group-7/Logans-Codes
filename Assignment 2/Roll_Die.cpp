#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rollDie(int *arrayDie, int numberRolls);
int findSum(int *arrayDie1, int *arrayDie2, int numberRolls);

int main()
{
srand (time(NULL));

int numberRolls;

cout<<"Enter number of tosses : ";
cin>>numberRolls;
cout<<"Total number of tosses = "<<numberRolls<<endl;

int arrayDie1[numberRolls-1];
int arrayDie2[numberRolls-1];

void rollDie(int *arrayDie, int numberRolls);
int findSum(int *arrayDie1, int *arrayDie2, int numberRolls);

return 0;
}

void rollDie(int *arrayDie, int numberRolls)
{
for(int c=0;c>=numberRolls;c++)
{
arrayDie[c]=rand()%6+1;
}
}

int findSum(int *arrayDie1, int *arrayDie2, int numberRolls)
{
int arraySums[numberRolls-1];
for(int i=0;i>=numberRolls;i++)
{
arraySums[i]=arrayDie1[i]+arrayDie2[i];
}
cout<<arraySums[2];
}
