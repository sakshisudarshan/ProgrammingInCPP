#include <iostream>
using namespace std;

class Dog {
public:
	virtual void disp()	{ cout << "Parent"<< endl; }
};

class Puppy : public Dog {
public:
   void disp(){	cout << "Child" << endl; }
};

int main()
{
    Dog d;
    d.disp();
    
    Dog *dp;
    Puppy p;
    dp=&p;
    dp->disp();

	return 0; 
			
}
