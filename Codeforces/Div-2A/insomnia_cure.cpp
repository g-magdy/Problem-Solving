#include <iostream>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int unharmed = 0;
    for (int i = 1; i <= d; i++)
        unharmed += (i % k && i % l && i % m && i % n);
    cout << d - unharmed;
    return 0;
}