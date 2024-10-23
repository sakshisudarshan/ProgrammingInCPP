#include <iostream>
using namespace std;

class CommonInfo{
private:
    string name;
    int age;
    string gender;
    
public:
    void set_info(){
        cout<<"Enter name"<<endl;
        cin>> name;
        cout<<"Enter age"<<endl;
        cin>> age;
        cout<<"Enter gender"<<endl;
        cin>> gender;
    }
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
    
};

class Director:public CommonInfo{
private:
    int sal;
public:
    void set_sal(){
        cout<<"Enter salary"<<endl;
        cin>>sal;
    }
    
    void get_sal(){
        cout<<"Salary is "<<sal<<endl;
    }
};

class Manager:public CommonInfo{
private:
    int sal;
public:
    void set_sal(){
        cout<<"Enter salary"<<endl;
        cin>>sal;
    }
    
    void get_sal(){
        cout<<"Salary is "<<sal<<endl;
    }
};

class Intern:public CommonInfo{
private:
    int grade;
public:
    void set_grade(){
        cout<<"Enter grade on 10"<<endl;
        cin>>grade;
    }
    
    void get_grade(){
        cout<<"Grade is "<<grade<<endl;
    }
};

int main(){
    
    Director d;
    d.set_info();
    d.display();
    d.set_sal();
    d.get_sal();
    
    Manager m;
    m.set_info();
    m.display();
    m.set_sal();
    m.get_sal();
    
    Intern s;
    s.set_info();
    s.display();
    s.set_grade();
    s.get_grade();
    
    return 0;
}
