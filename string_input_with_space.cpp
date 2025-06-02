#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, p;

    cin >> n;

    cin.ignore(); // use it to ignore enter space problem

    getline(cin, s); // we take string with space like this
    getline(cin, p);

    cout << n << endl;
    cout << s << " " << p << endl;

    return 0;
}