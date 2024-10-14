#include <iostream>
using namespace std;

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
    
    friend class Homework;
};

class Homework{
public:
void PrintResults(EquilateralTriangle et){
    cout<<"The circumference is="<<et.circumference<<endl;
    cout<<"The area is="<< et.area<<endl;
 }
};

int main(){
    EquilateralTriangle et;
    et.setA(3);
    Homework hw;
    hw.PrintResults(et);
}
