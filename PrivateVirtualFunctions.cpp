#include <iostream>
using namespace std;

class Engineering {
public:
    Engineering() { 
        cout << "Engineering class constructor\n"; 
    }

    virtual ~Engineering() { 
        cout << "Engineering class destructor\n"; 
    }
 
    void show() { 
        cout << "show() called on Engineering class\n"; 
    }

    virtual void print(){
        cout << "print() called on Engineering class\n";
    }
};

class ComputerScience : public Engineering {
public:
    ComputerScience(){
        cout << "ComputerScience class constructor\n";
    }

    virtual ~ComputerScience(){
        cout << "ComputerScience class destructor\n";
    }

private:
    virtual void print(){
        cout << "print() called on ComputerScience class\n";
    }
};

int main()
{
    Engineering* b_ptr = new ComputerScience();
    b_ptr->show();
    b_ptr->print();
    delete b_ptr;
    
    return 0;
}
