#include <iostream> 
using namespace std;

class Number { 

private:
    int value; 
    
public:  
    Number(int v = 0) : value(v) {} 
    
    friend istream& operator >> (istream &input, Number &num) {
        cout << "Enter a value: "; 
        input >> num.value;
        return input; 
    } 
    
    friend ostream& operator << (ostream &output, const Number &num) { 
        output << "The value is: " << num.value; 
        return output;
        } 
}; 

int main() {
    Number num; 
    cin >> num; 
    cout << num; 
    return 0;
}
