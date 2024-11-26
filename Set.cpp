#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> s1;
    s1.insert(1);
    s1.insert(4);
    s1.insert(3);
    
    set <int>::iterator i;
    for(i=s1.begin();i!=s1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    auto itr=s1.find(33);
    if(itr!=s1.end())
        cout<<"\n"<<(*itr); //if nothing is printed then the value does not exist
        
    set <int> s2 (s1.begin(),s1.end());
    set <int>:: iterator p;
    for(p=s2.begin();p!=s2.end();p++){
        cout<<*p<<" ";
    }
    cout<<endl;
    
    cout<<s2.size()<<endl;
    cout<<s2.max_size()<<endl;
    s2.erase(1);
    set <int>:: iterator pr;
    for(pr=s2.begin();pr!=s2.end();pr++){
        cout<<*pr<<" ";
    }
    cout<<endl;
    
    s2.clear();
    cout<<s1.empty()<<endl;
    cout<<s2.empty()<<endl;
    
    return 0;
}
