#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> guardRows, guardCols;
    int r, c;
    cin >> r >> c;
    char cakes[r][c];
    int m = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> cakes[i][j];
            if (cakes[i][j] == 'S')
            {
                guardRows.push_back(i);
                guardCols.push_back(j);
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            bool gr = false, gc = false;
            for (int k = 0; k < guardRows.size() && !gr; k++)
                if (guardRows[k] == i)
                    gr = true;
            for (int k = 0; k < guardCols.size() && !gc; k++)
                if (guardCols[k] == j)
                    gc = true;
            if (gr && gc)
                m++;
        }
    }
    cout << r * c - m;
    return 0;
}