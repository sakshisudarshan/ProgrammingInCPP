#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"In A..."<<endl;
    }
};

class B: public A{
public:
// by default compiler adds B():A() 
// hence constructor of B calls constructor of A
// therefore output is 
//In A...
//In B..
    B(){
        cout<<"In B..."<<endl;
    }
};

int main(){
    
    B obj;
    
    return 0;
}
