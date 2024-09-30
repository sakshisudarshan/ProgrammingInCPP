#include <iostream>
using namespace std;

inline int getMax(int x,int y){
   return (x>y)? x: y;
 
}

inline int getMin(int x,int y){
   return (x<y)? x: y;
 
}
int main()
{
    int x;
    int y;
    cout<<"Please enter x and y values"<<endl;
    cin>>x;
    cin>>y;
    cout<<"Maximum value is " << getMax(x,y)<<endl;
    cout<<"Minimum value is " << getMin(x,y);
    return 0;
}
