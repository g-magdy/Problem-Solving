#include <iostream>
using namespace std;
int main()
{
    int friends = 0;
    cin >> friends;
    int j = 0;
    int fingers = 0;
    for (int i = 0; i < friends; i++)
    {
        cin >> j;
        fingers += j;
    }
    int ways = 0;
    for (int i = 1; i <= 5; i++)
        if ((fingers - 1 + i) % (friends + 1) != 0)
            ways++;

    cout << ways;
    return 0;
}