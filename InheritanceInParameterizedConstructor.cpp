#include <iostream>
using namespace std;

class A{
protected:
    int data_A;
public:
    A(){
        cout<<"In A..."<<endl;
    }
    
    A(int a){
        data_A=a;
    }
};

class B: public A{
private:
    int data_B;
public:
    B(){
        cout<<"In B..."<<endl;
    }
    
    B(int b,int c):A(c){ //here value of b will go to data_B and value of c will go to data_A 
        data_B=b;
    }
    
    void display(){
        cout<<"Constructor value in class A is "<<data_A<<endl;
        cout<<"Constructor value in class B is "<<data_B<<endl;
    }
};

int main(){
    
    B obj(10,20);
    obj.display();
    
    return 0;
}
