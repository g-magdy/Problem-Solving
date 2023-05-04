#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int count_upper = 0, count_lower = 0;
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isupper(s[i]))
            count_upper++;
        else
            count_lower++;
    }
    if (count_upper > count_lower)
        for (int i = 0; s[i] != '\0'; i++)
        {
            cout << (char)toupper(s[i]);
        }
    else
        for (int i = 0; s[i] != '\0'; i++)
        {
            cout << (char)tolower(s[i]);
        }
    return 0;
}