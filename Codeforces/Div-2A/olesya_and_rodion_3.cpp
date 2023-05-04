#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    long long n;
    long long t;
    cin>>n>>t;
    long long up_bound = pow(10, n);
    string num = to_string(t);
    for (int i = 1; i < n; i++)
    {
        num += to_string(t);
    }
    if (num < up_bound)
        cout << num;
    return 0;
}