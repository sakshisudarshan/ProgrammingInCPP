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
    
    void getData(){
        cout<<"The entered data is "<<data<<endl;
    }
};

class B: public A {
    
};

int main(){
    B obj;
    obj.setData();
    obj.getData();
    
    return 0;
}
