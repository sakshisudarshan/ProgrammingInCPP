#include <iostream>
using namespace std;

class Employee{
protected:
    int income;
public:
    void setIncome(int i){
        income=i;
    }
};

class IncomeTax:public Employee{
protected:
    int i_tax;
public:
    void calc_tax(){
        i_tax=0.12*income;
    }
};

class HomeTax{
protected:
    int h_tax;
public:
    void setTax(int h){
        h_tax=h;
    }
};

class Taxes:public IncomeTax,public HomeTax{
protected :
    int total;
public:
    void calc_total_tax(){
        total=i_tax+h_tax;
        cout<<"The total income is "<<income<<endl;
        cout<<"The income tax is "<<i_tax<<endl;
        cout<<"The home tax is "<<h_tax<<endl;
        cout<<"The total tax is "<<total<<endl;
    }
};

int main(){
    Taxes t;
    t.setIncome(100000);
    t.calc_tax();
    t.setTax(5000);
    t.calc_total_tax();
    
    return 0;
}
