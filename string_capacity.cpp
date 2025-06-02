#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.size() << endl; // print the size of the string

    s.resize(4); // change the size of the string
    cout << s << endl;

    s.resize(10);      // change the size of the string with null
    s.resize(10, 'x'); // change the size of the string and fill with x
    cout << s << endl;

    s.clear(); // clear the string

    cout << s.size() << endl;

    if (s.empty() == true) // cheking the string is empty or not
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}