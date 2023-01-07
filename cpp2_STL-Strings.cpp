// Strings => strings are objects that represents sequences of charactres.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // creating string
    string s0("Initial string");                  // creating string s0
    string s1;                                    // creating string s1
    string s2(s0);                                // creating string s2 which has copy of s0
    string s3(s0, 8, 3);                          // creating string s3 which has copy of s0 which is begin after
                                                  // char. 8 and has 3 char.
    string s4 = "A character sequences";          // creating string s4
    string s5("Another character sequences", 12); // creating string s5 which has only 12 char. begin from start
    string s6(10, 'x');                           // creating string s6 which has value 10 time x
    string s7(10, 42);                            // creating string s7 which has value present at 42 in ASCII code
    string s8(s0.begin(), s0.begin() + 7);        // creating string s8 which has copy of s0 from begin to 7 char.

    // printing string
    cout << s1 << endl
         << s2 << endl
         << s3 << endl
         << s4 << endl
         << s5 << endl
         << s6 << endl
         << s7 << endl
         << s8 << endl;

    // Another way of printing string
    for (string::iterator i = s0.begin(); i != s0.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
// All operation same as vector.