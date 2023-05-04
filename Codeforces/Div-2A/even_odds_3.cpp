#include <iostream>
#include <math.h>
using namespace std;
 int main()
 {
    long long n, k;
    cin>>n >>k;
    long long last_odd = ceil(n / 2.0);
    long long ans;
    if (k <= last_odd)
        ans = 1 + 2 * (k - 1);
    else
        ans = 2 + 2 * (k - last_odd - 1);
    cout << ans;
    return 0;
 }