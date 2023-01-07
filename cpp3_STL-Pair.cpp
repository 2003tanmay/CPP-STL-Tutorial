// Pair => Pair is a pair of a 2 datatypes.
// syntax = pair<datatype1,datatype2> name_of_pair;

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;                        // creating pair
    p = make_pair(2, "abc");                    // inserting value in pair
    p = {2, "abcd"};                            // another method to insert a value
    cout << p.first << " " << p.second << endl; // printing pair

    pair<int, string> p1 = p; // making copy of pair p
    p1.first = 3;             // we can also change first and second value of pair

    pair<int, int> p_array[3]; // array of pair
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    cout << "before swap" << endl;
    for (int i = 0; i < 3; i++) // printing pair
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    swap(p_array[0], p_array[2]);

    cout << "after swap" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    return 0;
}