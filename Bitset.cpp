#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<8> bitsetA;
    bitset<8> bitsetB(15);
    bitset<8> bitsetC(string("1111"));

    cout << "Uninitialized bitset: " << bitsetA << endl;
    cout << "Initialized with decimal: " << bitsetB << endl;
    cout << "Initialized with string: " << bitsetC << endl;
    
    int position = 0;
    bitset<4> bitsFullySet("1111"), bitsAllCleared;

    cout << "any() value: " <<bitsFullySet.any() << endl;
    cout << "all() value: " <<bitsFullySet.all() << endl;
    cout << "none() value: " <<bitsFullySet.none() << endl;
    cout << "test() at position 0: " << bitsFullySet.test(position) << endl;
    cout << "size() value: " << bitsFullySet.size() << endl;
    cout << "Value of bitsAllCleared before using set(): " << bitsAllCleared << endl;
    bitsAllCleared.set(position);
    cout << "Value of bitsAllCleared after using set(): " << bitsAllCleared << endl;
    cout << "Value of bitsFullySet before using reset(): " << bitsFullySet << endl;
    bitsFullySet.reset(position);
    cout << "Value of bitsFullySet after using reset(): " << bitsFullySet << endl;

    string binaryString;
    binaryString = bitsFullySet.to_string();
    cout << "binaryString: " << binaryString << endl;
    cout << "Unsigned Long value: " << bitsFullySet.to_ulong() << endl;

    return 0;
}
