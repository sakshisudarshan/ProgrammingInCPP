#include <iostream>
using namespace std;

class LivingOrganisms{
public:
    void disp1(){
        cout<<"Hello,this is living organisms class"<<endl;
    }

};

class Mammals: public LivingOrganisms {
public:
       void disp2(){
        cout<<"Hello,this is Mammals class"<<endl;
        
    }
};

class Humans: public Mammals {
public:
       void disp3(){
        cout<<"Hello,this is Humans class"<<endl;
        
    }
};

int main(){
    Humans man;
    man.disp1();
    man.disp2();
    man.disp3();
    
    Mammals whale;
    whale.disp1();
    whale.disp2();
    
    return 0;
}
