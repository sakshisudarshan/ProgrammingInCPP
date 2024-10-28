#include <iostream>
using namespace std;

class DataBase{
public:
    virtual void getName()=0;
};

class Manager:public DataBase{
public:
    void getName(){
        cout<<" function of Manager class"<<endl;
    }
};

class Customer:public DataBase{
public:
    void getName(){
        cout<<" function of Customer class"<<endl;
    }
};

int main(){
    DataBase *ptr;
    Manager m;
    ptr=&m;
    ptr->getName();
    
    Customer c;
    c.getName();
    
    return 0;
}
