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
    cout<<"The current size of v6 is:"<<v6.size()<<endl;
    v6.pop_back();
    cout<<"The current capacity of v6 is:"<<v6.capacity()<<endl;
    cout<<"The current size of v6 is:"<<v6.size()<<endl;
    v6.pop_back();
    v6.pop_back();
    cout<<"The current capacity of v6 is:"<<v6.capacity()<<endl;
    cout<<"The current size of v6 is:"<<v6.size()<<endl;
    
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<endl;
    }
    cout<<"First value in v6 is:"<<v6.front()<<endl;
    cout<<"Last value in v6 is:"<<v6.back()<<endl;
    cout<<"Value at index 3 in v6 is:"<<v6.at(3)<<endl;
    
    vector<int>:: iterator iter=v6.begin();
    v6.insert(iter,00);
    v6.insert(iter+3,35);
    for(int i=0;i<v6.size();i++){
        cout<<v6[i]<<endl;
    }
    
    v6.clear();
    cout<<"The current capacity of v6 is:"<<v6.capacity()<<endl;
    cout<<"The current size of v6 is:"<<v6.size()<<endl;
    
    return 0;
}
