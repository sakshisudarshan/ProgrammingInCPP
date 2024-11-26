#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset <int> m1={27,27};
    m1.insert(4);
    m1.insert(3);
    
    
    multiset <int>::iterator i;
    for(i=m1.begin();i!=m1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    m1.erase(27);
    multiset <int>::iterator it;
    for(it=m1.begin();it!=m1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    m1.insert(3);
    m1.insert(3);
    multiset <int>::iterator itrr;
    for(itrr=m1.begin();itrr!=m1.end();itrr++){
        cout<<*itrr<<" ";
    }
    cout<<endl;
    
    m1.erase(m1.find(3));
    
    multiset <int>::iterator itr;
    for(itr=m1.begin();itr!=m1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    cout<<m1.size()<<endl;
    cout<<m1.max_size()<<endl;
    
    cout<<m1.count(3)<<endl;
    cout<<m1.count(4)<<endl;
    cout<<m1.count(27)<<endl;
    
    cout<<m1.empty()<<endl;
    m1.clear();
    cout<<m1.empty()<<endl;
    
    return 0;
}
