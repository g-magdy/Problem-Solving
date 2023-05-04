#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (i == s.length())
            break;
        if (s.substr(i, 3) == "WUB")
        {
            s.replace(i, 3, "");
            if (i != 0 && s[i-1] != ' ')
                s.insert(i, " ");
            i--;
        }
    }
    cout << s << endl;
    return 0;
}