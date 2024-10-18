#include <iostream>
using namespace std;

class Counter{
private:
    int val;
    mutable int cnt;

public:
    Counter(int v=0): val(v),cnt(0){}
    
    int getValue() const{
        cnt++;
        return val;
    }
    
    int getCnt() const{
        return cnt;
    }
};

int main(){
    const Counter c(5);
    Counter ob(10);
    
    cout<<"value is "<< c.getValue()<<endl;
    cout<<"value is "<< c.getValue()<<endl;
    cout<<"count is "<< c.getCnt()<<endl;
    cout<<"count is "<< ob.getCnt()<<endl;
    
    return 0;
}
