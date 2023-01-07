// Iterators => they are structure like pointers. they are also pointing element of STL container.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator it = v.begin();
    for (it; it != v.end(); it++)
    {
        cout << (*it) << endl;
    }

    /*in case of vector or continous memory we can do it++ or it+1 but in case of non-continuos memory like map and
      set we can not do it+1 it give error we use it++.*/
    return 0;
}