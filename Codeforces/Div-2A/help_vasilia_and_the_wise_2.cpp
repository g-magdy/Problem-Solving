#include <iostream>
using namespace std;

bool isValid(int x, int y, int z, int w)
{
    int arr[4] = {x, y, z, w};
    bool cond1 = true;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 && j != i; j++)
            if (arr[i] == arr[j])
                cond1 = false;
    }
    bool cond2 = (x > 0 && x < 10) && (y > 0 && y < 10) && (z > 0 && z < 10) && (w > 0 && w < 10);
    return (cond1 && cond2);
}

// [x, y, z, w, r1, r2, c1, c2, d1, d2]
bool checkEq(int arr[])
{
    bool a = (arr[0] + arr[1] == arr[4]) && (arr[2] + arr[3] == arr[5]); // rows
    bool b = (arr[0] + arr[2] == arr[6]) && (arr[1] + arr[3] == arr[7]); // cols
    bool c = (arr[0] + arr[3] == arr[8]) && (arr[1] + arr[2] == arr[9]); // diag
    return (a && b && c);
}

int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int x, y;
    int z, w;
    bool ok = false;
    for (int a = 1; a <= 9; a++)
    {
        x = a;
        y = r1 - a;
        z = c1 - x;
        w = c2 - y;
        int arr[] = {x, y, z, w, r1, r2, c1, c2, d1, d2};
        ok = isValid(x, y, z, w) && checkEq(arr);
        if (ok)
            break;
    }
    if (ok)
        cout << x << " " << y << endl
             << z << " " << w;
    else
        cout << -1;
    return 0;
}