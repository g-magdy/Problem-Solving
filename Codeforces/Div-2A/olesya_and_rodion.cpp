#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    long long num = t; //initially
    long long lb = pow(10, n - 1) - 1;
    long long ub = pow(10, n) - 1;
    while (num <= lb)
    {
        num += t;
    }
    if (num < ub)
        cout << num;
    else
        cout << -1;
    return 0;
}