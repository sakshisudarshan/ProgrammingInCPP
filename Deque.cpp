#include <iostream>
#include <queue>
using namespace std;

void showd(deque <int> d){
    deque<int>:: iterator it;
    for(it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void showq(deque <int> q){
    deque<int>:: iterator i;
    for(i=q.begin();i!=q.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
int main(){
    
    deque<int> d;
    d.push_front(10);
    d.push_front(20);
    d.push_front(30);
    d.push_front(50);
    showd(d);
    
    d.pop_front();
    showd(d);
    
    d.push_back(90);
    d.push_back(80);
    showd(d);
    
    d.pop_back();
    showd(d);
    
    cout<<"Size of d is "<<d.size()<<endl;
    
    deque<int> q;
    q.push_front(11);
    q.push_front(22);
    q.push_front(33);
    q.pop_front();
    showq(q);
    
    q.push_back(66);
    q.pop_back();
    q.push_back(55);
    showq(q);
    
    cout<<"Size of q is "<<q.size()<<endl;
    cout<<q.at(2)<<endl;
    
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    q.swap(d);
    showq(q);
    showd(d);
    
    d.clear();
    
    d.emplace_front(3);
    d.emplace_back(4);
    showd(d);
    
    d.clear();
    
    cout<<d.empty()<<endl;
    cout<<q.empty()<<endl;
    
    return 0;
}
