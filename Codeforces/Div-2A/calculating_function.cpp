#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long result = 0;
    if (n % 2 == 0)
        result = n / 2;
    else
        result = -(n + 1) / 2;
    cout << result;
    return 0;
}