#include <iostream>
using namespace std;
int main()
{
    int l, r, a;
    cin >> l >> r >> a;
    int lesser = (l < r) ? l : r, greater = l + r - lesser;
    int team;
    if (!a &&(!l || !r))
        team = 0;
    else
    {
        team += lesser * 2;
        greater -= lesser;
        int smallerRemaining = (a < greater) ? a : greater;
        team += smallerRemaining * 2;
        a -= smallerRemaining;
        if (a)
            team += (a / 2) * 2;
    }
    cout << team;
    return 0;
}