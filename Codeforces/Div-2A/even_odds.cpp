#include <iostream>
#include <math.h>
using namespace std;
 int main()
 {
    int n, k;
    cin>>n >>k;
    int last_odd = ceil(n / 2.0);
    int position = 2, curr_odd = 1, curr_even = 0, ans = 1;
    while (position <= k)
    {
        if(position <= last_odd)
        {
            if (curr_odd + 2 <= n) // i don't think we need this
                curr_odd += 2;
            ans = curr_odd;
        }
        else
        {
            if (curr_even + 2 <= n) // i don't think we need this
                curr_even += 2;
            ans = curr_even;
        }
        position++;
    }
    cout << ans;
    return 0;
 }