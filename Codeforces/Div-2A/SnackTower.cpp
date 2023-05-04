#include <iostream>
using namespace std;

bool contains(int* arr, int size, int target)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int *fallen = new int[n];
    int req_base = n;
    for(int i = 0; i < n; i++)
        cin >> fallen[i];
    

    for(int day = 0; day < n; day++)
    {
        if (fallen[day] == req_base)
        {
            cout << fallen[day] << " ";
            req_base--;
            while (contains(fallen, day, req_base))
            {
                cout << req_base << " ";
                req_base--;
            }
            // while I have the next required base, print it
        }
        cout << '\n';
    }

    delete[] fallen;

    return 0;
}