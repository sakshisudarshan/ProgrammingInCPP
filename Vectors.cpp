#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2 {10,20,30};
    vector<char> v3(6);
    vector<int> v4(5,10);
    vector<string> v5(3,"sk");
    cout<<v5[0]<<endl;
    cout<<v5[1]<<endl;
    cout<<v5[2]<<endl;
    vector<int> v6;
    
    for(int i=0;i<=2;i++){
       cout<<v2[i]<<endl;
    }
    cout<<"The current capacity of v1 is:"<<v1.capacity()<<endl;
    v1.push_back(3);
    v1.push_back(4);
    cout<<"The current capacity of v1 is:"<<v1.capacity()<<endl;
    
    for(int i=0;i<=9;i++){
        v6.push_back(10*(i+1));
    }
    cout<<"The current capacity of v6 is:"<<v6.capacity()<<endl;
    
    return 0;
}
