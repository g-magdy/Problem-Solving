#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        cout << 1;
    else
    {
        int arr[] = {8, 4, 2, 6};
        cout << arr[(n - 1) % 4];
    }
    return 0;
}