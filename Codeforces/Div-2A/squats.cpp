#include <iostream>
using namespace std;
int main()
{
    int n, up = 0, down = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == 'X') up++;
        else down++;
    int req = max(up, down) - (n / 2);
    cout << req << endl;
    if (down > up) // make them stand
    {
        for (int i = 0; s[i] != '\0' && req; i++)
        {
            if (s[i] == 'x')
            {
                s[i] = 'X';
                req--;
            }
        }
    }
    else // make them sit
    {
        for (int i = 0; s[i] != '\0' && req; i++)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                req--;
            }
        }
    }
    cout << s;
    return 0;
}