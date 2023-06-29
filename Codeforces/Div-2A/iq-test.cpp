#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count_even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count_even += (arr[i] % 2 == 0);
    }
    for (int i = 0; i < n; i++)
    {
        bool cond = (arr[i] % 2 == 0 && count_even == 1) ||
                    (arr[i] % 2 == 1 && count_even == n - 1);
        if (cond)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}