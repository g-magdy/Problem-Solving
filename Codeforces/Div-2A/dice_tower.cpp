#include <iostream>
using namespace std;
int main()
{
    int n, top;
    cin >> n >> top;
    int x, y;
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x == top || y == top)
            result = false;
        if (x == 7 - top || y == 7 - top)
            result = false;
    }
    if (result)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}