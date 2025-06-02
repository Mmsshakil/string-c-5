#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream s2(s); // here we put the s string to the s2 by stringstream function
    string wrd;         // here we can a new string named word

    // s2 >> wrd;           // we put a word to the wrd string from the s2 string
    // cout << wrd << endl; // we print the wrd string, will print Hello
    // s2 >> wrd;           // we put a word to the wrd string from the s2 string
    // cout << wrd << endl; // we print the wrd string, will print I
    // s2 >> wrd;           // we put a word to the wrd string from the s2 string
    // cout << wrd << endl; // we print the wrd string, will print am

    while (s2 >> wrd)
    {
        cout << wrd << endl;
    }

    return 0;
}