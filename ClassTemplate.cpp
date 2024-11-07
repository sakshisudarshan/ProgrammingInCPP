#include <iostream>
using namespace std;

template <class X>
class ArrayList {
private:
	struct ControlBlock
	{
		X capacity;
		X *ptr;
	};

	ControlBlock *s;

public:
	ArrayList(X capacity) {
		s=new ControlBlock;
		s->capacity=capacity;
		s->ptr=new X[s->capacity];
	}

	void addElement(int index,X data) {
		if(index>=0 && index<=s->capacity-1)
			s->ptr[index]=data;

		else
			cout<<"Array index is not valid /n"<<endl;
	}

	void viewElement(int index,X &data) {
		if(index>=0 && index<=s->capacity-1)
			data=s->ptr[index];
		else
			cout<<"Array index is not valid /n"<<endl;
	}
};

int main()
{
	int data;
	ArrayList <int> list1(3);
	list1.addElement(0,1);
	list1.addElement(1,2);
	list1.viewElement(0,data);
	cout<<""<<data<<endl;

	return 0;
}
