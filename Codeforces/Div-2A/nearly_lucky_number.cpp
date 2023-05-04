#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int numL = 0;
    for (int i = 0; n[i] != '\0'; i++)
        if (n[i] == '4' || n[i] == '7')
            numL++;
    string s = to_string(numL);
    bool isL = true;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] != '4' && s[i] != '7')
            isL = false;
    cout << (isL ? "YES" : "NO");
    return 0;
}