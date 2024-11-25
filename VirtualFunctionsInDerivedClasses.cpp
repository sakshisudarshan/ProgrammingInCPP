#include <iostream>
using namespace std;

class Level1{
public:
    virtual void f1(){
        cout<<"In base class-function 1"<<endl;
    }
    
    virtual void f2(){
        cout<<"In base class-function 2"<<endl;
    }
    
    void f3(){
        cout<<"In base class-function 3"<<endl;
    }
    
};

class Level2:public Level1{
public:
    void f1(){
        cout<<"In derived class 1-function 1"<<endl;
    }
    
    void f3(){
        cout<<"In derived class 1-function 3"<<endl;
    }
};

class Level3:public Level2{
public:
    void f2(){
        cout<<"In derived class 2-function 2"<<endl;
    }
};

int main(){
    Level1 *b=new Level1();
    b->f1();
    b->f2();
    b->f3();
    
    Level2 d;
    b=&d;
    b->f1();
    b->f2();
    b->f3();
    
    Level2 *p;
    Level3 c;
    p=&c;
    p->f1();
    p->f2();
    p->f3();
    
    return 0;
}
