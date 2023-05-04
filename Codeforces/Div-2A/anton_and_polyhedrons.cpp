#include <iostream>
using namespace std;
int main()
{
    long long n, sides = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        switch (s[0])
        {
            case 'T' :
                sides += 4;
                break;
            case 'C':
                sides += 6;
                break;
            case 'O':
                sides += 8;
                break;
            case 'D':
                sides += 12;
                break;
            case 'I':
                sides += 20;
                break;
        }

    }
    cout << sides;
    return 0;
}