#include<iostream>
#include<tuple>
using namespace std;

class Employee{
private:
    string name;
    int experience;
    float salary;
    
public:
    void setData(string n,int e,float s){
        name=n;
        experience=e;
        salary=s;
    }
    
    void showData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Experience: "<<experience<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    tuple<string,int>t1;
    t1=make_tuple("Sudhanwa",1);
    cout<<get<0>(t1)<<endl;
    
    tuple<int,int,int>t2;
    t2=make_tuple(4,9,2003);
    cout<<get<2>(t2)<<endl;
    
    tuple<int,string,Employee>t3;
    Employee obj;
    obj.setData("Sakshi",1,100000);
    t3=make_tuple(1,"Employee 1",obj);
    cout<<get<1>(t3)<<endl;
    obj.showData();

    tuple<int,float>c1;
    tuple<int,float>c2;
    c1=make_tuple(1,1.13f);
    c2=make_tuple(1,1.1f);
    
    if(c1==c2)
        cout<<"c1==c2"<<endl;
    else if(c1<=c2)
        cout<<"c1<=c2"<<endl;
    else
        cout<<"c1>=c2"<<endl;
        
    return 0;
}
