#include <iostream>
using namespace std;

class A{
public:
    virtual void display(){
        cout<<"Display function of class A"<<endl;
    }
};

class B:public A{
public:
    void display(){
        cout<<"Display function of class B"<<endl;
    }
};

int main(){
    A *a;
    B b;
    a=&b;
    a->display();
    
    return 0;
}
