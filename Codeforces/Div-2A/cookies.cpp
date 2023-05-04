#include <iostream>
using namespace std;
int main()
{
    int n, cookies = 0, evenB = 0, oddB = 0;
    cin >> n;
    int *arr = new int[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
        cookies += arr[i];
        if (arr[i] % 2 == 0)
            evenB++;
        else
            oddB++;
    }
    cout << ((cookies % 2 == 0) ? evenB: oddB);
    delete[] arr;
    return 0;
}