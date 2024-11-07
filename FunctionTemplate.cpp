#include <iostream>
using namespace std;

template <class B>
B big(B x,B y)
{
    if(x>y)
        return x;
    return y;
}


int main()
{
    cout<<""<<big(2,8)<<endl;
    cout<<""<<big(20.3,1.28)<<endl;

    return 0;
}
