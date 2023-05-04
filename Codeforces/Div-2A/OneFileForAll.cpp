#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int avg = (a + b + c) / 3;
    cout << abs(a - avg) + abs(b - avg) + abs(c - avg);
    return 0;
}