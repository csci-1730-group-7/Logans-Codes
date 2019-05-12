#include <iostream>
using namespace std;

void getScores(int& score1, int& score2, int& score3, int& score4, int& score5);
int readScore();
float calcAverage(int score1, int score2, int score3, int score4, int score5,int low);
int findLowest(int score1, int score2, int score3, int score4, int score5);


int main()
{
	int score1, score2, score3, score4, score5;

	getScores(score1,score2,score3,score4,score5);
	int lowScore = findLowest(score1, score2, score3, score4, score5);
	float average = calcAverage(score1, score2, score3, score4, score5,lowScore);
	
	cout << "Average = " << average << endl;
	cout << "Dropped score = " << lowScore << endl;

	return 0;
}

int readScore()
{
	int score;
	do {
		cin >> score;

		if ((score < 0) || (score > 100))
		{
			cout << "Please enter a valid score 0 <= score <= 100 ";
			cin >> score;
		}

	} while ((score < 0) || (score > 100));

	return score;
}

void getScores(int &score1, int &score2, int &score3, int &score4, int &score5)
{
	cout << "Test Score Average Program" << endl;
	cout << "==========================" << endl;
	
	cout << "Enter score: ";
	score1 = readScore();
	cout << "Enter score: ";
	score2 = readScore();
	cout << "Enter score: ";
	score3 = readScore();
	cout << "Enter score: ";
	score4 = readScore();
	cout << "Enter score: ";
	score5 = readScore();
}

float calcAverage (int score1, int score2, int score3, int score4, int score5,int low)
{
	float average = ((score1 + score2 + score3 + score4 + score5)-low) / 4.0;
	return average;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int low;

	low = score1;
	if (low > score2) { low = score2; }
	if (low > score3) { low = score3; }
	if (low > score4) { low = score4; }
	if (low > score5) { low = score5; }

	return low;
}