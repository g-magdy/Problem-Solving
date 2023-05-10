#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int past = 0;
    int current;
    int total = 0;
    int i = 1;
    for (; total <= n; i++)
    {
        current = i * (i + 1) / 2;
        total = past + current;
        past = total;
    }
    cout << i-2;
    return 0;
}