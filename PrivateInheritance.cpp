#include <iostream>
using namespace std;

class A {
public:
    void disp_A(){
        cout<<"in class A"<<endl;
    }

};

class B: private A {
    
public:
      void disp_B(){
         disp_A();
         cout<<"in class B"<<endl;
    }
    
};

int main(){
    B obj;
    obj.disp_B();
    return 0;
}

//when we use private access specifier,the object of child class can not access methods of parent class
//but the child class can call the member functions of parent class
