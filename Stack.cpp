#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    stack <int> s;
    s.push(2);
    s.push(7);
    s.push(3);
    s.push(4);
    
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    
    s.pop();
    cout<<s.top()<<endl;
    
    stack <int> k;
    k.push(1);
    k.push(2);
    
    cout<<k.size()<<endl;
    k.pop();
    
    k.swap(s);
    cout<<s.size()<<endl;
    cout<<k.size()<<endl;
    
    s.pop();
    cout<<s.empty()<<endl;
    cout<<k.empty()<<endl;
    
    k.emplace(4);
    while(!k.empty()){
        cout<<k.top()<<" ";
        k.pop();
    }
    
    return 0;
}
