#include <iostream>
using namespace std;

class A {
	int a;

public:
	int* ptr;

	A()
	{
		cout << "Constructor was Called!"
			<< endl;
	}
};

int main()
{

	A* a = new A;
	cout << "Object of class A was "
		<< "created using new operator!"
		<< endl;

	A* b = (A*)malloc(sizeof(A));
	cout << "Object of class A was "
		<< "created using malloc()!"
		<< endl;

	return 0;
}
