#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << n +1;
    else if (n < m)
        cout << n;
    else
        cout << n + (n / m) + (n % m == 0);
    return 0;
}