#include <iostream>
using namespace std;

#define min(x,y) ((x < y) ? x : y)

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int n256 = min(k2, min(k5, k6));
    k2 = k2 - n256;
    int n32 = min(k2, k3);
    cout << n32 * 32 + n256 * 256;
    return 0;
}