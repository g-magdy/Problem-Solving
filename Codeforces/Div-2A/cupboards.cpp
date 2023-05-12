#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *left = new int[n];
    int *right = new int[n];
    int lc0 = 0, lc1 = 0, rc0 = 0, rc1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> left[i] >> right[i];
        if (left[i])
            lc1++;
        else
            lc0++;
        if (right[i])
            rc1++;
        else
            rc0++;
    }
    cout << (min(lc0, lc1) + min(rc0, rc1));
    delete[] left;
    delete[] right;
    return 0;
}