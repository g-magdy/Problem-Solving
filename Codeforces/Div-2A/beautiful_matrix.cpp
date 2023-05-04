#include<iostream>
using namespace std;
int main()
{
    int row_index;
    int col_index;
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5;c++)
        {
            int entry;
            cin >> entry;
            if (entry == 1)
            {
                row_index = r;
                col_index = c;
            }
        }
    }
    int moves = abs(row_index - 3) + abs(col_index - 3);
    cout << moves;
    return 0;
}