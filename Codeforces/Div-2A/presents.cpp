#include<iostream>
using namespace std;

int search(int * arr, int length, int target)
{
    for (int i = 0; i < length; i++)
        if (arr[i] == target)
            return i + 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int j = 0; j < n; j++)
        cout << search(arr, n, j + 1) << " ";
    return 0;
}