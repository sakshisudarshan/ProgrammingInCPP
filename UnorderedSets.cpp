#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <string> s;

    s.insert("sakshi");
    s.insert("sudarshan");
    s.insert("is");
    s.insert("coding in");
    s.insert("cpp");

    string key = "cpp";

    if (s.find(key) == s.end())
        cout << key << " not found" << endl;
    else
        cout << "Found " << key << endl ;

    key = "c++";
    if (s.find(key) == s.end())
        cout << key << " not found"<<endl;
    else
        cout << "Found " << key << endl;

    unordered_set<string>::iterator itr;
    for (itr = s.begin(); itr != s.end();
         itr++)
        cout << (*itr) << endl;
        
    int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(int);

    unordered_set<int> intSet;
    unordered_set<int> duplicate;

    for (int i = 0; i < n; i++) {
        if (intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
        else
            duplicate.insert(arr[i]);
    }

    cout << "Duplicate items are: ";
    for (auto it = duplicate.begin(); it != duplicate.end(); it++)
        cout << *it << " ";

    return 0;
}

    
