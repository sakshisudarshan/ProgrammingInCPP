#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{11,7,18,6,77,55,12,81,15};
    list<string> l2;
    
    list<int> :: iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
    }
    cout<<"\nInitial Size of list l1 is "<<l1.size();
    
    l1.reverse();
    cout<<"\nAfter reversing"<<endl;
    list<int> :: iterator t=l1.begin();
    while(t!=l1.end()){
        cout<<*t<<" ";
        t++;
    }
    
    l1.sort();
    cout<<"\nAfter sorting"<<endl;
    list<int> :: iterator pt=l1.begin();
    while(pt!=l1.end()){
        cout<<*pt<<" ";
        pt++;
    }
    
    l1.pop_back();
    l1.pop_front();
    
    cout<<"\nAfter popping from list l1"<<endl;
    list<int> :: iterator s=l1.begin();
    while(s!=l1.end()){
        cout<<*s<<" ";
        s++;
    }
    
    cout<<"\nSize of list l1 after popping is "<<l1.size();
    
    l1.remove(100);
    l1.remove(55);
    
    cout<<"\nAfter removing from list l1"<<endl;
    list<int> :: iterator b=l1.begin();
    while(b!=l1.end()){
        cout<<*b<<" ";
        b++;
    }
    cout<<"Size of list l2 is "<<l2.size()<<endl;
    
    l2.push_back("Sakshi");
    l2.push_front("Sudarshan");
    
    list<string> :: iterator pr=l2.begin();
    while(pr!=l2.end()){
        cout<<*pr<<" ";
        pr++;
    }
    
    l2.remove("Sudarshan");
    l2.push_back("Sudhanwa");
    
    cout<<"\n";
    list<string> :: iterator r=l2.begin();
    while(r!=l2.end()){
        cout<<*r<<" ";
        r++;
    }
    cout<<"\nSize of list l2 is "<<l2.size()<<endl;
    
    l1.clear();
    cout<<"Size of list l1 after clearing is "<<l1.size()<<endl;
    
    return 0;
}
