#include<iostream>
using namespace std;

void bubblesort(int arr[], int size)
{
    for (int l = size - 1; l > 0; l--)
    {
        for (int i = 0; i < l; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
