#include<iostream>
using namespace std; 

class Complex {
private: 
    float real;
    float imag; 
    
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {} 

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp; 
        
    } 
    
    Complex operator - (const Complex& obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
        
    } 
    
    Complex operator * (const Complex& obj) { 
        Complex temp;
        temp.real = (real * obj.real) - (imag * obj.imag);
        temp.imag = (real * obj.imag) + (imag * obj.real);
        return temp;
        
    } 
    
    Complex operator / (const Complex& obj) {
        Complex temp;
        float denominator = (obj.real * obj.real) + (obj.imag * obj.imag);
        temp.real = ((real * obj.real) + (imag * obj.imag)) / denominator; 
        temp.imag = ((imag * obj.real) - (real * obj.imag)) / denominator; 
        return temp;
        } 
        
        void display() {
            if (imag >= 0) 
                cout << real << " + " << imag << "i" << endl;
            else
                cout << real << " - " << -imag << "i" << endl;
                }
            }; 
            
int main() { 
    Complex c1(6, 4), c2(3, 2);
    Complex cAdd = c1 + c2;
    cout << "Addition: "; 
    cAdd.display();
    
    Complex cSub = c1 - c2;
    cout << "Subtraction: ";
    cSub.display();
    
    Complex cMul = c1 * c2;
    cout << "Multiplication: ";
    cMul.display(); 
    
    Complex cDiv = c1 / c2;
    cout << "Division: ";
    cDiv.display();
    
    return 0; 

}
