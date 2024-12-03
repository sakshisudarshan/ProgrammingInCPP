#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    unordered_map<string, int> umap;

    umap["apple"] = 3;
    umap.insert({"banana", 2});
    umap.insert(make_pair("orange", 5));
    umap.emplace("grape", 4);

    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap.at("banana") << endl;

    cout << "All elements in unordered_map:"<<endl;
    for (auto& item : umap) {
        cout << item.first << ": " << item.second << endl;
    }

    string key = "lemon";
    if (umap.find(key) != umap.end()) {
        cout << key << " found in unordered_map." << endl;
    } else {
        cout << key << " not found in unordered_map." << endl;
    }

    umap.erase("banana");
    cout << "After erasing 'banana':" << endl;
    for (auto& item : umap) {
        cout << item.first << ": " << item.second << endl;
    }

    cout << "Count of 'apple': " << umap.count("apple") << endl;

    cout << "Size of unordered_map: " << umap.size() << endl;

    if (umap.empty()) {
        cout << "unordered_map is empty." << endl;
    } else {
        cout << "unordered_map is not empty." << endl;
    }

    umap.clear();
    cout << "After clearing, size of unordered_map: " << umap.size() << endl;

    return 0;
}
