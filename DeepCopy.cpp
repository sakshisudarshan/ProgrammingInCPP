#include <iostream>
using namespace std;

class box {
private:
    int length;
    int* breadth;
    int height;

public:
    box()
    {
        breadth = new int;
    }

    void set_dimension(int l, int b,
                       int h)
    {
        length = l;
        *breadth = b;
        height = h;
    }

    void show_data()
    {
        cout << " Length = " << length
             << "\n Breadth = " << *breadth
             << "\n Height = " << height
             << endl;
    }

    box(box& bx)
    {
        length = bx.length;
        breadth = new int;
        *breadth = *(bx.breadth);
        height = bx.height;
    }

    ~box()
    {
        delete breadth;
    }
};

int main()
{
    box obj1;
    obj1.set_dimension(12, 14, 16);
    obj1.show_data();

    box obj2 = obj1;
    obj2.show_data();

    return 0;
}
