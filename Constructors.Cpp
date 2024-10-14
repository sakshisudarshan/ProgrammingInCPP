#include <iostream>
using namespace std;

class Demo { 
private:
    int x; 
    int y; 
    
public:
    // 1. Default Constructor
    Demo() : x(0), y(0) { 
        cout << "Default constructor called." << endl;
        }
        
    // 2. Parameterized Constructor (explicit to prevent implicit conversions) 
    explicit Demo(int a, int b) : x(a), y(b) {
        cout << "Parameterized constructor called." << endl; 
    } 
    
    // 3. Copy Constructor 
    Demo(const Demo& obj) : x(obj.x), y(obj.y) { 
        cout << "Copy constructor called." << endl; 
    } 
    
    // 4. Move Constructor 
    Demo(Demo&& obj) noexcept : x(obj.x), y(obj.y) { 
        obj.x = 0; 
        obj.y = 0; 
        cout << "Move constructor called." << endl; 
    }
       
    void display() const { 
        cout << "x = " << x << ", y = " << y << endl;
    }
    
    // Destructor 
    ~Demo() { 
        cout << "Destructor called." << endl; 
    } 
}; 

int main() {
    Demo obj1; 
    obj1.display();
    
    Demo obj2(10, 20);
    obj2.display();
    
    Demo obj3 = obj2; 
    obj3.display(); 
    
    Demo obj4 = move(obj2); 
    obj4.display();
    
    return 0; 
}
