#include <iostream> 
using namespace std;

class MyClass { 

private:
    int value; 
    
public:  
    MyClass(int v = 0) : value(v) {} 
    
    MyClass* operator -> (){
        return this;
    }
    
    int operator() (int x){
        return value+x;
    }
    
    int& operator [](int index){
        static int arr[10]={0};
        return arr[index];
    }
    
    void display() const{
        cout<<"Value: "<<value<<endl;
    }
}; 

int main() {
    MyClass obj(5);
    obj->display();
    cout<<"using () operator "<<obj(10)<<endl;
    obj[4]=100;
    cout<<"using [] operator "<<obj[4]<<endl;
    return 0;
}
