#include "bits/stdc++.h"
using namespace std;

int main()
{
    // set<int> s; // duplicacy is not allowed
    set<int, greater<int>> s; // for descending order
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    cout << s.size() << endl;
    s.erase(2);
    for (auto i : s)
        cout << i << " ";
    cout << endl;

    return 0;
}