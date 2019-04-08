#include <iostream>
using namespace std;

class ClassName
{
public:
ClassName(){
 number=0;
 }
 
 ClassName(int a){
 a = number;
 }
ClassName operator+(ClassName aro);


int number;

};

ClassName ClassName::operator+(ClassName aro){
ClassName object;

object.number = aro.number + number;

return (object);
}

int main()
{
ClassName object1(23);
ClassName object2(45);
ClassName object3;

object3 = object1 + object2;

cout << object3.number << endl;



return 0;
}
