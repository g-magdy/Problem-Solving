#include <iostream>
using namespace std;
int main()
{
    int x;
    int steps;
    cin >> x;
    for (int i = 5; i > 0; i--)
    {
        if (x >= i)
        {
            steps += x / i;
            x = x % i;
        }
    }
    cout << steps;
    return 0;
}