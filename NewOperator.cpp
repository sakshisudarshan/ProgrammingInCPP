#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"hello"<<endl;
    }
};

int main(){
    A *ptr;
    ptr=new A;
    
    return 0;
}
