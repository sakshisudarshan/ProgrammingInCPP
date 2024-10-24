#include <iostream>
using namespace std;

class A{
public:
    void disp(){
        cout<<"In class A display function"<<endl;
    }
};

class B:public A{
public:
    void disp(){
        cout<<"In class B display function"<<endl;
    }
};

int main(){
    B obj;
    obj.disp();
    
    return 0;
}
