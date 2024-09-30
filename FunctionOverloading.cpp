#include <stdio.h>
#include <iostream>
using namespace std;

class Calculator {
    int n1,n2,n3;
    
    public:
        void add(int n1, int n2){
           cout<<"the result is"<<(n1+n2)<<endl;
        }
        
        void add(int n1,int n2,int n3){
         cout<<"the result is "<<(n1+n2+n3)<<endl;
        }
        
        
};

int main()
{
    Calculator obj;
    obj.add(10,20,30);
    obj.add(20,80);

    return 0;
}
