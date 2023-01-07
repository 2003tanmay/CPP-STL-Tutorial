#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*Map => map is combination of key and value. key and value can be a different datatype. In map it store key &
             those key is connected with a value. In map all value stores in sorted manner. This containers can"t
             stores same key multiple time*/
    map<int, string> m;
    m[1] = "abc"; // O(log(n)) complaxity
    m[5] = "cdc";
    m.insert({4, "afg"});

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++) // printing map
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    m.erase(4); // it erase 4.

    for (auto &pr : m) // another method of printing map
    {
        cout << pr.first << " " << pr.second << endl;
    }

    m.clear(); // it clear all values in map

    /*Unordered Map => This is a type non-continuos memory. In unorderd map values stores in unsorted manner.
                       This containers can"t stores same key multiple time.*/
    unordered_map<int, string> u_m;
    u_m[1] = "abc"; // O(1) complaxity
    auto it = u_m.find(1);
    m.erase(it);

    // Multimap => In this we can store same key multiple time.
    multimap<int, int> mm;

    return 0;
}