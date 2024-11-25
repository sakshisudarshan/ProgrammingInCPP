#include <iostream>
#include <map>
using namespace std;

int main(){
    
    map <int,string> student;
    student[1]="Sakshi";
    student[19]="Sudhanwa";
    student[150]="Sunitha";
    student[135]="Shashank";
    student[180]="Sudarshan";
    
    map <int,string> stud {{133,"Sakshi"},{190,"Sudhanwa"}};
    
    cout<<stud[133]<<endl;
    cout<<stud.at(190)<<endl;
    
    map <int,string> :: iterator p=student.begin();
    while(p!=student.end()){
        cout<<p->second<<endl;
        p++;
    }
    
    stud.insert(pair <int,string> (11,"Malhar"));
    stud.insert(pair <int,string> (2,"Aarabhi"));
    
    map <int,string> :: iterator f=stud.begin();
    while(f!=stud.end()){
        cout<<f->second<<endl;
        f++;
    }
    
    cout<<"Size of Student is "<<student.size()<<endl;
    cout<<"Size of Stud is "<<stud.size()<<endl;
    
    cout<<"To check if the map is emply or not the method empty() is used. If 0 then not empty else if 1 it is empty"<<endl;
    cout<<"Student map? "<<student.empty()<<endl;
    student.clear();
    cout<<"Current Student map? "<<student.empty()<<endl;
    cout<<"Stud map? "<<stud.empty()<<endl;
    
    return 0;  
}
