#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    bool are_equal = true;
    while (s1[i] != '\0')
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 == c2)
        {
            i++;
            continue;
        }
        else if (c1 > c2)
        {
            are_equal = false;
            cout << 1;
            break;
        }
        else
        {
            are_equal = false;
            cout << -1;
            break;
        }
        i++;
    }
    if (are_equal)
        cout << 0;
    return 0;
}
