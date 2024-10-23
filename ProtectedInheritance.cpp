#include <iostream>
using namespace std;

class A {
private:
    int data;
public:
    void setData(){
        cout<<"enter the data value"<<endl;
        cin>>data;
    }
    
    void getData_A(){
        cout<<"In class A"<<endl;
        cout<<"The entered data is "<<data<<endl;
    }
};

class B: protected A {
public:
       void getData_B(){
           setData();
           getData_A();
           cout<<"In class B"<<endl;
        
    }
};

int main(){
    B obj;
    obj.getData_B();
    
    return 0;
}
