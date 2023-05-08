#include <iostream>
using namespace std;
int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >>d3;
    int p1 = d1 + d2 + d3,
        p2 = 2 * (d1 + d2),
        p3 = 2 * (d1 + d3),
        p4 = 2 * (d2 + d3);
    cout << min(min(p1, p2), min(p3, p4));
    return 0;
}