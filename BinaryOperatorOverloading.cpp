#include <iostream>
using namespace std; 

class Point { 
    
private: 
    int x, y; 

public:  
    Point(int x = 0, int y = 0) : x(x), y(y) {}  
    
    Point operator + (const Point &p) { 
        return Point(x + p.x, y + p.y); 
    } 
    
    Point operator - (const Point &p) { 
        return Point(x - p.x, y - p.y); 
    } 
    
    void display() const { 
        cout << "(" << x << ", " << y << ")" << endl; 
        } 
};

int main() { 
    Point p1(3, 4);  
    Point p2(1, 2);
    Point p3 = p1 + p2; 
    Point p4 = p1 - p2; 
    cout << "Point p1: "; 
    p1.display(); 
    cout << "Point p2: "; 
    p2.display(); 
    cout << "Point p3 (p1 + p2): "; 
    p3.display(); 
    cout << "Point p4 (p1 - p2): "; 
    p4.display();  
    return 0; 
}
