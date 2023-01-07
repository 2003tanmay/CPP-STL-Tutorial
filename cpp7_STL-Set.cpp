#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Set => It is similer to map but in that has only key not a value.
    set<string> s;
    s.insert("abc");
    s.insert("rst");

    for (auto &value : s)
    {
        cout << value << endl;
    }

    for (auto it = s.begin(); it != s.end(); it++) // printing map
    {
        cout << (*it) << endl;
    }

    // Unorderde Set => It is similer to unorderd map but in that has only key not a value.
    unordered_set<int> u_s;

    // Multiset => It is similer to multimap but in that has only key not a value.
    multiset<string> mm;

    return 0;
}