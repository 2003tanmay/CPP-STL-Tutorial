#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    // In printing through iterator we write too much of code instead of this we can use range based loop.

    for (int &value : v) // firstly copy of v copied in value then compiler print value.
    {
        cout << value << " ";
    }

    auto a = 1;
    b = 55.55; // auto keyword autometically decide datatype of variables.

    return 0;
}