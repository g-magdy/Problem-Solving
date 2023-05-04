#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char c;
    bool BW = true;
    for (int i = 0; i < n*m; i++)
    {
        cin >> c;
        if (c == 'C' || c == 'M' || c =='Y')
            BW = false;
    }
    if (BW)
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}
