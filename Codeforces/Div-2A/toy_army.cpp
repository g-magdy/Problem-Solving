#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 2 * n;
    a -= a / 4;
    a -= a / 3;
    a -= a / 2;
    cout << 2 * n - a;
    return 0;
}