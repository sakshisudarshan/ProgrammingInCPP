#include <iostream>
using namespace std;

class Parent{
public:
    void display(){
        cout<<"Parent class"<<endl;
    }
};

class Child1:virtual public Parent{
    
};

class Child2:virtual public Parent{
    
};

class Grandchild:public Child1,public Child2{
    
};

int main(){
    Grandchild ob;
    ob.display();
    
    return 0;
}
