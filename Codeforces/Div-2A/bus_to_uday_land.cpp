#include <iostream>
using namespace std;

inline bool book(string &s)
{
    if (s[0] == 'O' && s[1] == 'O')
    {
        s[0] = '+';
        s[1] = '+';
        return true;
    }
    else if (s[3] == 'O' && s[4] == 'O')
    {
        s[3] = '+';
        s[4] = '+';
        return true;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    bool booked = false;
    string *seats = new string[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> seats[i];
        if (!booked && book(seats[i]))
            booked = true;
    }
    if (!booked)
        cout << "NO";
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << seats[i] << endl;
    }
    return 0;
}