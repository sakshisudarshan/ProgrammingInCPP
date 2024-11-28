#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    priority_queue <int> p;
    p.push(11);
    p.push(29);
    p.push(27);
    
    cout<<p.top()<<endl;
    cout<<p.size()<<endl;
    
    p.pop();
    
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    
    priority_queue <int> q;
    q.push(3);
    q.push(20);
    q.push(4);
    
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    
    p.push(7);
    p.push(12);
    
    q.push(29);
    q.push(28);
    
    q.swap(p);
    
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;
    
    cout<<p.empty()<<endl;
    q.emplace(100);
    cout<<q.empty()<<endl;
    
    priority_queue <int> :: value_type AnInt;
    AnInt = 20;
    cout<<"The value_type is AnInt = "<<AnInt<<endl;
    
    return 0;
}
