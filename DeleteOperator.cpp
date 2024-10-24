#include <iostream>
using namespace std;


int main(){
    int *ptr;
    ptr=new int[2];
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    
    cout<<""<<ptr[0]<<endl;
    cout<<""<<ptr[1]<<endl;
    cout<<""<<ptr[2]<<endl;
    
    delete []ptr;
    
    cout<<""<<ptr[0]<<endl;
    cout<<""<<ptr[1]<<endl;
    cout<<""<<ptr[2]<<endl;
    
    return 0;
}
