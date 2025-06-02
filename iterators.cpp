#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // cout << *s.begin() << endl;     // we can print character without index, first char
    // cout << *s.end() << endl;       // print the last character after end of a string
    // cout << *(s.end() - 1) << endl; // we can print other char of string

    // this loop will print full string using iterator
    for (string::iterator i = s.begin(); i < s.end(); i++)
    // for (auto i = s.begin(); i < s.end(); i++)
    {
        cout << *i << endl;
    }

    return 0;
}