#include <iostream>
using namespace std;

class Human{
    virtual void display(){
        cout<<"Hi, I am a human"<<endl;
    }
};

class Student:public Human{
    
};

int main(){
    Human *h=new Student;
    Student *s= dynamic_cast<Student*>(h);
    if(s!=NULL){
        cout<<"Downcast successful"<<endl;
    }
    else{
        cout<<"Downcast failed"<<endl;
    }
    
    return 0;
}
