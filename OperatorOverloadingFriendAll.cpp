#include <iostream>
using namespace std;

class Box{

private:
    double length,width,height;
    
public:
    Box(double l=0,double w=0,double h=0):length(l),width(w),height(h) {}
    
    friend Box operator+(Box &b1, Box &b2);
    friend Box operator-(Box &b1,Box &b2);
    friend Box operator*(Box &b1,Box &b2);
    friend Box operator/(Box &b1, Box &b2);
    
    void display(){
        cout<<"Length ="<<length<<", width="<<width<<" and height="<<height<<endl;
    }
};

Box operator+(Box &b1, Box &b2){
    return Box(b1.length+b2.length,b1.width+b2.width,b1.height+b2.height);
}

Box operator-(Box &b1, Box &b2){
    return Box(b1.length-b2.length,b1.width-b2.width,b1.height-b2.height);
}

Box operator*(Box &b1, Box &b2){
    return Box(b1.length*b2.length,b1.width*b2.width,b1.height*b2.height);
}

Box operator/(Box &b1, Box &b2){
    return Box(b1.length/b2.length,b1.width/b2.width,b1.height/b2.height);
}

int main(){
    Box box1(10,20,30);
    Box box2(5,10,15);
    Box res;
    
    res= box1+box2;
    res.display();
    
    res= box1-box2;
    res.display();
    
    res= box1*box2;
    res.display();
    
    res= box1/box2;
    res.display();
    
    return 0;
}
