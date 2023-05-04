#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int r = 1; r <= n; r++)
    {
        if (r % 2 == 1)
            for (int i = 0; i < m; i++) cout << '#';
        else if (r % 4 == 2) 
        {
            for (int j = 0; j < m - 1; j++) cout << '.'; cout << '#';
        }
        else
        {
            cout << '#';
            for (int i = 0; i < m - 1; i++) cout << '.';
        }
        cout << endl;
    }
    return 0;
}