#include <iostream>
using namespace std;

class EquilateralTriangle;

class Homework{
public:
    void PrintResults(EquilateralTriangle& et);
    void InvalidAccess(EquilateralTriangle& et);
};

class EquilateralTriangle{
private:
    float a;
    float circumference;
    float area;
    
public:
    void setA(float length){
        a=length;
        circumference=a*3;
        area=(1.73*a*a)/4;
    }
    
    friend void Homework::PrintResults(EquilateralTriangle&);
};


void Homework:: PrintResults(EquilateralTriangle& et){
    cout<<"The circumference is="<<et.circumference<<endl;
    cout<<"The area is="<< et.area<<endl;
 }
 
 void Homework::InvalidAccess(EquilateralTriangle& et){
    // cout<<"The circumference is="<<et.circumference<<endl;
    //cout<<"The area is="<< et.area<<endl;
    cout<<"InvalidAccess() can not access the private members of EquilateralTriangle class as only the PrintResults() method is a friend of Class EquilateralTriangle, but not the entire Homework class"<<endl;
 }


int main(){
    EquilateralTriangle et;
    et.setA(3);
    Homework hw;
    hw.PrintResults(et);
    hw.InvalidAccess(et);
}
