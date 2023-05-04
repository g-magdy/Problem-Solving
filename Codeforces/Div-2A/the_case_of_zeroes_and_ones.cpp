#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != s[i+1])
        {
            s.replace(i, 2, "");
            i--;
            n -= 2;
        }
    }
    cout << n;
    return 0;
}
