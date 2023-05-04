#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] != b[i])
            cout << 1;
        else
            cout << 0;
    return 0;
}