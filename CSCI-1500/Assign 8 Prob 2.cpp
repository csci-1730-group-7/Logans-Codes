#include <iostream>
#include <string>
//prompts the user for a sentence and then counts the number of words, finds longest word,
//and calculates average number of letters

using namespace std;

int main(){

string sentence,wordLong;
int number=0,length,longest=0;
double average,sum=0;

cout<<"Enter a sentence:";

do{
cin>>sentence;


if(sentence!=","&&sentence!=";"&&sentence!="."&&sentence!="!"&&sentence!="?"){

length=sentence.length();
sum=sum+length;

if(length>longest){
longest=length;
wordLong=sentence;
}

number++;
}

}while(sentence!="."&&sentence!="!"&&sentence!="?");

average=sum/number;

cout<<"Number of words in sentence = "<<number<<endl;
cout<<"Average word length = "<<average<<endl;
cout<<"Longest word present: "<<wordLong<<endl;

return 0;
}

