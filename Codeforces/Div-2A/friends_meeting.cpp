#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b>> c;
    int M = max(max(a, b), c);
    int m = min(min(a, b), c);
    cout << M - m;
    return 0;
}