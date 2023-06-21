#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int chosen[k];
    bool taken_oranges[n * k] = {false};
    for (int i = 0; i < k; i++)
    {
        cin >> chosen[i];
        taken_oranges[chosen[i]-1] = true;
        // segment 1 ==> chosen[0]
    }
    for (int i = 0; i < k; i++)
    {
        cout << chosen[i] << ' ';
        for (int j = 1, g = 1; g < n; j++)
        {
            if (!taken_oranges[j-1])
            {
                cout << j << ' ';
                g++;
                taken_oranges[j - 1] = true;
            }
        }
        cout << endl;
    }
    return 0;
}