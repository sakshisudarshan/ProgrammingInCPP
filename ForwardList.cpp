#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    
    forward_list <int> f;
    f.assign({1,2,3});
    
    for(int &a:f){
        cout<<a<<" ";
    }
    cout<<endl;
    
    f.push_front(10);
    f.emplace_front(20);
    f.pop_front();
     for(int &a:f){
        cout<<a<<" ";
    }
    cout<<endl;
    
    forward_list<int>::iterator ptr;
    ptr=f.insert_after(f.begin(),{20});
    
    for(int &b: f){
        cout<<b<<" ";
    }
    cout<<endl;
    
    ptr = f.emplace_after(f.begin(), 2);
    ptr = f.emplace_after(ptr, 2);
    for(int &b: f){
        cout<<b<<" ";
    }
    cout<<endl;
    
    ptr = f.erase_after(f.begin());
    for(int &b: f){
        cout<<b<<" ";
    }
    cout<<endl;
    
    f.push_front(20);
    f.remove(3);
    for(int &b: f){
        cout<<b<<" ";
    }
    cout<<endl;
    
    f.reverse();
    for(int &b: f){
        cout<<b<<" ";
    }
    cout<<endl;
    
    forward_list <int> g;
    g.push_front(27);
    g.splice_after(g.begin(),f);
    
    for(int &c:g){
        cout<<c<<" ";
    }
    cout<<endl;
    
    f.clear();
    cout<<f.empty()<<endl;
    cout<<g.empty()<<endl;
    
    return 0;
}
