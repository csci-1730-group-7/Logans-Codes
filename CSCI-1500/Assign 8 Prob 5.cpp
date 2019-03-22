#include <iostream>
#include <string>
using namespace std;
//user inputs an amount of rows which will be drawn as rows of asterisks

void asteriskShape (int qrow){
    string star, temp, empty;

    for (int a=1;a<=qrow;a++){
        temp=temp+"*";

        for (int b=1;b<=qrow-a;b++){
            empty += " ";
        }

        star=empty;
        star=star+temp;
        cout<<star;
        cout<<endl;
        temp=temp + "*";
        empty.clear();
    }
}
int main(){

    int rows;

    cout<<"Enter number of rows (>0): ";
    cin>>rows;

    if (rows<=0){

        do{
            cout<<"No negative numbers allowed!"<<endl;
            cout<<"Please use a positive integer:"<<endl;
            cin>>rows;
        }while(rows<=0);
    }
    asteriskShape(rows);
    
    return 0;
}


