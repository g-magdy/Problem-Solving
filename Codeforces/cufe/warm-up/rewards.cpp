#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, cups = 0, medals = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        (i < 3) ? cups += x : medals += x;
    }
    cin >> x;
    cout << ((ceil(cups/5.0) + ceil(medals/10.0) <= x) ? "YES" : "NO");
    return 0;
}