#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int f, t, j, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        j = (t > k) ? (f - t + k) : f;
        max = (j > max) ? j : max;
    }
    cout << max;
    return 0;
}