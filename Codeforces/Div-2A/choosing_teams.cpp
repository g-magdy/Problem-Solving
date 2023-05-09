#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    int valid = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        valid += (arr[i] <= 5 - k) ? 1 : 0;
    }
    cout << valid / 3;
    return 0;
}