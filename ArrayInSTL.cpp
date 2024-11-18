#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int,8> ob={1,2,3,4,5};
    cout<<"Size of the array ob is "<<ob.size()<<endl;
    cout<<ob[1]<<endl;
    cout<<ob.at(2)<<endl;
    cout<<ob.front()<<endl;
    cout<<ob.back()<<endl;
    ob.fill(27);
    for(int i=0;i<=7;i++)
    {
        cout<<ob[i]<<endl;
    }
    
    array<int,4> arr1={3,2,7,4};
    array<int,4> arr2={4,9,2,7};
    arr1.swap(arr2);
    cout<<"After swapping arr1 values are:"<<endl;
    for(int i=0;i<=3;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"After swapping arr2 values are:"<<endl;
    for(int i=0;i<=3;i++)
    {
        cout<<arr2.at(i)<<endl;
    }
    
    return 0;
}
