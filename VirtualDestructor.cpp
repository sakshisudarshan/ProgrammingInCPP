#include <iostream>
using namespace std;

class B {
public:
	B()	 
	{ cout << "Constructing base\n"; }
	virtual ~B()
	{ cout << "Destructing base\n"; }	 
};

class D : public B {
public:
	D()	 
	{ cout << "Constructing derived\n"; }
	~D()
	{ cout << "Destructing derived\n"; }
};

int main()
{
    D *d = new D(); 
    B *b = d;
    delete b;
  
    return 0;
}
