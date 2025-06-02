#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    string s2 = "Beauty";

    // s += s2;          // s = s+s2
    // s.append(s2);     // same as s = s+s2
    // s.push_back('A'); // add value back of the string
    // s.pop_back();     // remove last character from string

    // s = "nothing";           // assing a new string
    // s.erase(6, 2);           // 6 kothay thake soro hobe, 2 koyta character delete korbo
    // s.replace(6, 5, "King"); // 6 kothay thake soro hobe, 5 koyta delete korbo, delete korar por ki new string bosabo
    s.insert(5, "Nice");     // 5 index , what will insert

    cout << s << endl;
    return 0;
}