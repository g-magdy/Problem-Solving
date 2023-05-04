#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_j = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min_j])
                min_j = j;
        }
        if (min_j != i)
        {
            int temp = arr[min_j];
            arr[min_j] = arr[i];
            arr[i] = temp;
        }
    }
}
bool findSecondMin(int arr[], int size, int & sMin)
{
    sMin = arr[0]; // assume
    int i = 0;
    while (arr[i] <= arr[0] && i < size) i++;
    if (i < size)
        sMin = arr[i];
    return (sMin > arr[0]);
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selectionSort(a, n);
    int secondMin;
    if (findSecondMin(a, n, secondMin))
        cout << secondMin;
    else
        cout << "NO";
    delete[] a;
    return 0;
}