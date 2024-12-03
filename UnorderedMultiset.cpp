#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_multiset<string> umset;
    
    umset.insert("apple");
    umset.insert("banana");
    umset.insert("apple");
    umset.insert("orange");
    umset.insert("banana");
    umset.insert("apple");

    cout << "Elements in unordered_multiset:" << endl;
    for (auto& elem : umset) {
        cout << elem << " ";
    }
    cout << endl;

    string fruit = "apple";
    cout << "Count of '" << fruit << "': " << umset.count(fruit) << endl;

    auto it = umset.find("banana");
    if (it != umset.end()) {
        cout << "'banana' found in unordered_multiset." << endl;
    } else {
        cout << "'banana' not found in unordered_multiset." << endl;
    }

    umset.erase(it);
    cout << "After erasing one 'banana':" ;
    for (auto& elem : umset) {
        cout << elem << " ";
    }
    cout << endl;

    umset.erase("apple");
    cout << "After erasing all 'apple':" ;
    for (auto& elem : umset) {
        cout << elem << " ";
    }
    cout << endl;

    umset.clear();
    cout << "After clearing, size of unordered_multiset: " << umset.size() << endl;

    return 0;
}
