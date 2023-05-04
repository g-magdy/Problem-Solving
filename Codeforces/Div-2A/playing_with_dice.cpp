#include <iostream>
using namespace std;
int main()
{
    int aWin = 0, tie = 0, bWin = 0;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        int difA = abs(a - i), difB = abs(b - i);
        if (difA < difB)
            aWin++;
        else if (difA == difB)
            tie++;
        else
            bWin++;
    }
    cout << aWin << ' ' << tie << ' ' << bWin;
    return 0;
}