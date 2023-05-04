#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == '9' && i == 0)
            continue;
        else
            s[i] = (s[i] == '5') ? '4' : (s[i] == '6') ? '3'
                                 : (s[i] == '7')   ? '2'
                                 : (s[i] == '8')   ? '1'
                                 : (s[i] == '9')   ? '0'
                                                   : s[i];
    }
    cout << s;
    return 0;
}