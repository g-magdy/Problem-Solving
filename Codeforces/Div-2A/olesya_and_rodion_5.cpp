#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    if (n == 1)
    {
        if (t < 10)
            cout << t;
        else
            cout << -1;
        return 0;
    }

    string number; // initially

    if (t == 10)
    {
        number = "1";
        for (int i = 1; i < n; i++)
            number += '0';
    }
    else
    {
        string s = to_string(t);
        for (int i = 0; i < n; i++)
            number += s;
    }
    cout << number;
    return 0;
}