#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<int,int> m1;
    m1.insert(pair<int, int>(1, 40));
    m1.insert(pair<int, int>(2, 30));
    m1.insert(pair<int, int>(3, 60));
    m1.insert(pair<int, int>(6, 50));
    m1.insert(pair<int, int>(6, 10));
    
    multimap<int, int>::iterator itr;
    
    for(itr=m1.begin();itr!=m1.end();itr++){
        cout << '\t' << itr->first << '\t' << itr->second<< '\n';
    }
    
    cout << endl;
    
    m1.insert(pair<int, int>(4, 50));
    m1.insert(pair<int, int>(5, 10));
    
    multimap<int, int>::iterator it;
    
    for(it=m1.begin();it!=m1.end();it++){
        cout << '\t' << it->first << '\t' << it->second<< '\n';
    }
    
    cout<<m1.size()<<endl;
    cout<<m1.max_size()<<endl;
    cout<<m1.empty()<<endl;
    
    return 0;
}
