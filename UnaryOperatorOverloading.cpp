#include <iostream>
using namespace std;

class Number{

private:
    int value;

public:
    Number(int v=0):value(v){}
    
    Number operator - (){
        return Number(-value);
    }
    
    Number operator + (){
        return Number(+value);
    }
    
    bool operator ! (){
        return value==0;
    }
    
    Number operator ++ (){
        ++value;
        return *this;
    }
    
    Number operator -- (){
         --value;
         return *this;
    }
    
    void display() const{
        cout<< "value is "<<value<<endl;
    }
};

int main()
{
   Number num(10);
   
   cout<<"Original value ";
   num.display();
   
   num=-num;
   cout<<"after unary minus ";
   num.display();
   
   num=+num;
   cout<<"after unary plus ";
   num.display();
   
   if(!num)
    cout<<"num is zero "<<endl;
   else
    cout<<"num is non-zero "<<endl;
   
   num=++num;
   cout<<"after prefix increment ";
   num.display();
   
   num=--num;
   cout<<"after prefix decrement ";
   num.display();
   
    return 0;
}
