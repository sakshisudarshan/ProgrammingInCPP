#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_multimap<string, string> ummap;

    ummap.insert({"apple", "fruit"});
    ummap.insert({"carrot", "vegetable"});
    ummap.insert({"banana", "fruit"});
    ummap.insert({"grape", "fruit"});
    ummap.insert({"apple", "tech company"});
    ummap.insert({"carrot", "color"});
    
    cout << "Size of unordered_multimap: " << ummap.size() << endl;

    cout << "All elements in unordered_multimap:" << endl;
    for (const auto& item : ummap) {
        cout << item.first << ": " << item.second << endl;
    }

    auto it = ummap.find("apple");
    if (it != ummap.end()) {
        cout << "\nFirst occurrence of 'apple': " << it->first << ": " << it->second << endl;
    }

    cout << "Count of 'apple': " << ummap.count("apple") << endl;

    auto range = ummap.equal_range("apple");
    cout << "Elements with key 'apple':" << endl;
    for (auto itr = range.first; itr != range.second; ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }

    ummap.erase("carrot");
    cout << "\nAfter erasing elements with key 'carrot':" << endl;
    for (const auto& item : ummap) {
        cout << item.first << ": " << item.second << endl;
    }
    cout<<endl;

    cout << "Size of unordered_multimap: " << ummap.size() << endl;

    if (ummap.empty()) {
        cout << "unordered_multimap is empty." << endl;
    } else {
        cout << "unordered_multimap is not empty." << endl;
    }

    ummap.clear();
    cout << "After clearing, size of unordered_multimap: " << ummap.size() << endl;

    return 0;
}
