#include <iostream>
using namespace std;

const int globalVal=100;

class MyClass{
public:
    static const int staticVal=4;
    int val;
    mutable int mval;
    
    MyClass(int v=0):val(v),mval(0){}
    
    int getValue() const;
    
    void incr();
    
    static const int getStaticValue();
    
    void showGlobalValue() const;
    
    static void showConstParameter(const int& param);
};

int MyClass::getValue() const{
    return val;
}

const int MyClass::getStaticValue(){
    return staticVal;
}

void MyClass::incr(){
    val++;
    mval++;
}

void MyClass::showGlobalValue() const{
    cout<<"Global Value "<< ::globalVal<<endl;
}

void MyClass::showConstParameter(const int& param){
    cout<<"Const Parameter Value "<<param<<endl;
}

int main(){
    const MyClass obj(10);
    
    cout<<"value "<<obj.getValue()<<endl;
    obj.mval=1000;
    cout<<"Modified mutable value "<<obj.mval<<endl;
    
    cout<<"static constant value "<<MyClass::getStaticValue()<<endl;
    
    MyClass notConstObj(11);
    notConstObj.incr();
    cout<<"incremented value "<<notConstObj.getValue()<<endl;
    
    obj.showGlobalValue();
    
    MyClass::showConstParameter(::globalVal);
    
    return 0;
}
