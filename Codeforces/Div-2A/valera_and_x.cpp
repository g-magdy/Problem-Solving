#include <iostream>
using namespace std;

bool isOnDiagonal(int i, int j, int n)
{
    return ((i == j) || (i + j == n - 1));
}

int main()
{
    int n;
    cin>>n;
    char x, o;
    char c;
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            if(i== 0 && j == 0)
                x = c;
            else if (i == 0 && j == 1)
                o = c;
            else
            {
                if (isOnDiagonal(i, j, n) && c != x)
                    result = false;
                else if (!isOnDiagonal(i, j, n) && c != o)
                    result = false;
            }
        }
    }
    if (result && x != o)
        cout <<"YES";
    else
        cout << "NO";

    return 0;
}