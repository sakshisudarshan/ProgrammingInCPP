#include <iostream>
using namespace std;

class Father{
protected:
    int father_money;
public:
    void setFatherMoney(){
        cout<<"Enter money received from father"<<endl;
        cin>>father_money;
    }
    
    void getFatherMoney(){
        cout<<"Money received from father is "<<father_money<<endl;
    }
};

class Mother{
protected:
    int mother_money;
public:
    void setMotherMoney(){
        cout<<"Enter money received from mother"<<endl;
        cin>>mother_money;
    }
    
    void getMotherMoney(){
        cout<<"Money received from mother is "<<mother_money<<endl;
    }
};

class Daughter: public Father,public Mother{
private:
    int total_money;
public:
    void getChildMoney(){
        total_money=father_money+ mother_money;
        cout<<"The total pocket money is "<<total_money<<endl;
    }
};

int main(){
    
    Daughter s;
    s.setFatherMoney();
    s.getFatherMoney();
    s.setMotherMoney();
    s.getMotherMoney();
    s.getChildMoney();
    
    return 0;
}
