#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    
public:
    void setData(string s,int a){
        name=s;
        age=a;
    }
    
    void showData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    pair<string,int> p1;
    pair<string,string> p2;
    pair<float,Student>p3;
    
    p1=make_pair("Sakshi",21);
    p2=make_pair("Sakshi","Sudhanwa");
    Student s1;
    s1.setData("Sakshi",21);
    p3=make_pair(1.0f,s1);
    cout<<"" <<p1.first<<" "<<p1.second<<endl;
    cout<<""<<p2.first<<" "<<p2.second<<endl;
    cout<<""<<p3.first<<endl;
    Student ob=p3.second;
    ob.showData();
    
    pair<int,int> pr1;
    pair<int,int> pr2;
    
    pr1=make_pair(1,1);
    pr2=make_pair(2,2);
    
    if(pr1==pr2){
        cout<<"Equal";
    }
    else
        cout<<"Not equal";
        
    return 0;
}
