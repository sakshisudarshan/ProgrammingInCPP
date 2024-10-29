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
	void fun(int x = 1)
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
