#include <iostream>
using namespace std;

class Enemy{
	
	public:
		virtual void attack(){
			cout << "This is an attack!/n";
		}
		void tester(){
		cout << "This inherited\n";
		}
	protected:
		int attackPower=0;
};

class Monster: public Enemy{
	public:
		void attack(){
			cout << "Monster attack does -" << attackPower <<endl;
		}
	
};

class Ninja: public Enemy{
	public:
		void attack(){
			cout << "Ninja attack does -" << attackPower << endl;
		}
	
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	n.tester();
	m.tester();
}
