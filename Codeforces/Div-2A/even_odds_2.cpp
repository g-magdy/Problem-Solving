#include <iostream>
#include <math.h>
using namespace std;
 int main()
 {
    long long n, k;
    cin>>n >>k;
    long long last_odd = ceil(n / 2.0);
    long long position = 2, ans = 1;
    while (position <= k)
    {
        if (position == last_odd+1)
            ans = 2;
        else if (ans+2 <= n)
            ans += 2;
        position++;
    }
    cout << ans;
    return 0;
 }