#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cntPairs = 0;
    for (int a = 0; a*a <= n; a++)
    {
        for (int b = 0; b*b <= m ;b++)
        {
            cntPairs += (a * a + b == n && b * b + a == m);
        }
    }
    cout << cntPairs;
    return 0;
}