#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char flag[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> flag[i][j];
    bool valid = true;
    for (int i = 0; i < n && valid; i++)
    {
        if (i < n-1)
            if (flag[i][0] == flag[i+1][0])
                valid = false;
        for (int j = 1; j < m && valid; j++)
        {
            if (flag[i][j] < '0' || flag[i][j] > '9')
                valid = false;
            else if (flag[i][j] != flag[i][0])
                valid = false;
        }
    }
    cout << (valid ? "YES" : "NO");
    return 0;
}