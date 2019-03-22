#include <iostream>
#include <iomanip>
using namespace std;
const int NUMBER_ROWS = 3, NUMBER_COLUMNS = 3;

void calcColumnSum(const int matrix[][NUMBER_COLUMNS], int columnSum[]);
//takes the sum of the 3 columns

void display(const int matrix[][NUMBER_COLUMNS], const int columnSum[]);
//displays the numbers in a 3 by 3 matrix and the sum of the 3 column

int main()
{
int row1;
int row2;
int row3;
int row4;
int row5;
int row6;
int row7;
int row8;
int row9; 
int matrix[NUMBER_ROWS][NUMBER_COLUMNS];
//makes a 3x3 matrix in 2d array

int columnSum[NUMBER_COLUMNS];
cout <<“nter row 1: ”;
cin >> row1 >> row2 >> row3;
matrix[0][0] = row1;  matrix[0][1] = row2;  matrix[0][2] = row3;

cout <<”Enter row 2: “;
cin >> row4 >> row5 >> row6;
matrix[1][0] = row4;  matrix[1][1] = row5;  matrix[1][2] = row6;

cout <<”Enter row 3: “;
cin >> row7 >> row8 >> row9;
matrix[2][0] = row7;  matrix[2][1] = row8;  matrix[2][2] = row9;	
calcColumnSum(matrix, columnSum);
display(matrix,columnSum);
return 0;
}

void calcColumnSum(const int matrix[][NUMBER_COLUMNS], int columnSum[])
{
    for (int columnNum = 1; columnNum <= NUMBER_COLUMNS; columnNum++)
    {//Process one number
        double sum = 0;
        for (int rowNum = 1; rowNum <= NUMBER_ROWS; rowNum++)
            sum = sum + matrix[rowNum-1][columnNum-1];
        //sum contains the sum of all columns on number columnNum.-

columnSum[columnNum-1] = sum
    }
}

void display(const int matrix[][NUMBER_COLUMNS], const int columnSum[])
{
    cout <<  "table:\n";
    for (int rowNum = 1; rowNum <= NUMBER_ROWS; rowNum++)
    {//Display for one rowNum:
        cout << setw(10) << rowNum; 
        for (int columnNum = 1; columnNum <= NUMBER_COLUMNS; columnNum++)
            cout << setw(5) << matrix[rowNum-1][columnNum-1];
        cout << endl;
    }

    cout << "Column sum = ";
    for (int columnNum = 1; columnNum <= NUMBER_COLUMNS; columnNum++)
        cout << setw(5) << columnSum[columnNum-1];
    cout << endl;
}



