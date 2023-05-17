#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int j, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        sum += j;
    }
    cout << ceil(abs(sum*1.0) / x);
    return 0;
}