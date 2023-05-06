#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << ceil(n * n / 2.0) << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << (((i+j) % 2) ? '.' : 'C');
        cout << endl;
    }
    return 0;
}