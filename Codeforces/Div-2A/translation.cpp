#include <iostream>
using namespace std;

string reverse(string s)
{
    if (s == "")
        return "";
    return reverse(s.substr(1)) + s[0];
}

int main()
{
    string s, t;
    cin >> s >> t;
    s = reverse(s);
    if (s == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}