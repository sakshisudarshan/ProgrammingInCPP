#include <iostream>
using namespace std;

class StaticExample{
    static int counter;
    
    public:
        void incr(){
            counter++;
        }
        
        static void show(){
            cout<<"Count="<<counter<<endl;
        }
};

int StaticExample::counter=1;

int main(){
    
    StaticExample ob;
    ob.incr();
    ob.incr();
    StaticExample::show();
}
