#include<iostream>
using namespace std;
int main()
{
    int n_peaks, k, count = 0;
    cin >> n_peaks >> k;
    int n = 2 * n_peaks + 1;
    int *mountains = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mountains[i];

    for (int i = 1; i < n - 1 && count < k; i++)
    {
        if (mountains[i]-1 > mountains[i-1] && mountains[i]-1 > mountains[i+1])
        {
            mountains[i] -= 1;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << mountains[i] << " ";
    
    return 0;
}
