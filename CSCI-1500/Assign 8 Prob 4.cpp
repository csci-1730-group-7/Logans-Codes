#include <iostream>
#include <string>
#include <sstream>
//user inputs a positive integer, which is then converted into binary

using namespace std;

void swap(char& q1, char& q2){
    char temp=q1;
    q1=q2;
    q2=temp;
}
string reverse(const string& s){
    int begin=0;
    int ending=s.length();
    string temp(s);

    while (begin<ending){
        ending--;
        swap(temp[begin], temp[ending]);
        begin++;
    }

    return temp;
}
int main(){
    string bin="";
    stringstream tempA;
    int number, tempB;

    cout<<"Enter a positive valued integer: ";
    cin>>number;

    tempB=number;

    while (tempB>0){

        tempA<<tempB%2;
        bin+=tempA.str();
        tempB=tempB / 2;

        tempA.str(string());
    }

    cout<<number<<" in binary= "<<reverse(bin)<<endl;

    
	return 0;
}


