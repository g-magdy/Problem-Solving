#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    long long lb = pow(10, n - 1) - 1; // >=
    long long ub = pow(10, n) - 1; // <=
    long long num = 1;
    while (num < lb)
        num = 10 * num + 1;

    if (t != 10)
        num = num*t;
    else
        num -= 1;

    if (num <= ub && num != 0)
        cout << num;
    else
        cout << -1;
    return 0;
}