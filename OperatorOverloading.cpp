#include<iostream>
using namespace std;

class Complex 
{
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
        void display() {
            cout << real << " + " << imag << "i" << endl;
            }
        }; 
        
    int main() 
    { 
        Complex c1(3.5, 4.5), c2(2.5, 3.0); 
        Complex c3 = c1 + c2; 
        cout << "The sum of ";
        c1.display();
        cout << "and ";
        c2.display();
        cout << "is "; 
        c3.display();
        return 0;
     }
