#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num_matches = n * (n - 1);
    int **teams = new int *[n];

    int req_num = 0;

    for (int i = 0; i < n; i++)
    {
        teams[i] = new int[2];
        cin >> teams[i][0] >> teams[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && teams[i][0] == teams[j][1])
                req_num++;
        }
    }
    cout << req_num;
    delete []teams;
    return 0;
}