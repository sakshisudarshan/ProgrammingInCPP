#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    queue <int> s;
    s.push(2);
    s.push(7);
    s.push(3);
    s.push(4);
    
    cout<<"Size of s is "<<s.size()<<endl;
    cout<<"Front: "<<s.front()<<endl;
    cout<<"Back: "<<s.back()<<endl;
    
    s.pop();
    cout<<"Front: "<<s.front()<<endl;
    
    queue <int> k;
    k.push(1);
    k.push(2);
    
    cout<<"Size of k is "<<k.size()<<endl;
    k.pop();
    
    k.swap(s);
    cout<<"After swapping"<<endl;
    cout<<"Updated size of s is "<<s.size()<<endl;
    cout<<"Updated size of k is "<<k.size()<<endl;
    
    s.pop();
    cout<<s.empty()<<endl;
    cout<<k.empty()<<endl;
    
    k.emplace(2);
    cout<<"Values in queue: ";
    while(!k.empty()){
        cout<<k.front()<<" ";
        k.pop();
    }
    cout<<endl;

    return 0;
}
