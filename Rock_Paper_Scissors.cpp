#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getCompSelection();
int getUserSelection();
int playResults(int userSelect, int compSelect);

int main()
{
srand (time(NULL));

int userSelect;
int compSelect;
int winOrLoss;
int compWins=0;
int userWins=0;
int ties=0;
char playAgain;

do
{
cout<<"It's time to play Rock, Paper, Scissors!\n";
userSelect=getUserSelection();
compSelect=getCompSelection();

winOrLoss=playResults(userSelect,compSelect);

if(winOrLoss==1){userWins++;}
else if(winOrLoss==-1){compWins++;}
else if(winOrLoss==0){ties++;}

cout<<"Continue? (y/n)\n";
cin>>playAgain;

}while(playAgain=='y');
	
cout<<"I won "<<compWins<<" time(s)"<<endl<<"You won "<<userWins<<" time(s)"<<endl<<"There were "<<ties<<" Tie(s)\n";

return 0;
}

int getCompSelection()
{
return rand()%3+1;
}

int getUserSelection()
{
int selection;

cout<<"What is your play?\n";
cout<<"Rock (1), Paper(2), Scissors (3)\n";
cin>>selection;
if(selection==1){return 1;}
else if(selection==2){return 2;}
else if(selection==3){return 3;}
else{cout<<"Please enter a valid move you stupid human\n";}
}

int playResults(int userSelect, int compSelect)
{
if(userSelect==compSelect){cout<<"It was a tie\n";return 0;}

if(compSelect==1)
{
	if(userSelect==2){cout<<"You played paper and I played rock"<<endl<<"You win!"<<endl;return 1;}
	else if(userSelect==3){cout<<"You played paper and I played rock"<<endl<<"I win!"<<endl;return -1;}
}
if(compSelect==2)
{
	if(userSelect==1){cout<<"You played rock and I played paper"<<endl<<"I win!"<<endl;return -1;}
	else if(userSelect==3){cout<<"You played rock and I played scissors"<<endl<<"You win!"<<endl;return 1;}
}
if(compSelect==3)
{
	if(userSelect==1){cout<<"You played rock and I played scissors"<<endl<<"You win!"<<endl;return 1;}
	else if(userSelect==2){cout<<"You played paper and I played scissors"<<endl<<"I win!"<<endl;return -1;}
}
}
