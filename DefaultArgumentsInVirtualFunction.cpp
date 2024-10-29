// C++ program To demonstrate how default arguments
// and virtual function are used together
#include <iostream>
using namespace std;

class Boss {
public:
	virtual void fun(int x = 0)
	{
		cout << " Parent: x = " << x << endl;
	}
};

class Emp : public Boss {
public:
	virtual void fun(int x = 1) // NOTE THIS CHANGE
	{
		cout << "Child: x = " << x << endl;
	}
};

int main()
{
	Emp e; 
	Boss* bp = &e;
	bp->fun(); 

	return 0; 
			
}
