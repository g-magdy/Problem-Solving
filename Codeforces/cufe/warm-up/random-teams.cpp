#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    // n * (n - 1) / 2 // max when team has n participats
    // n - (m-1) is the biggest number of people in one team
    int t = n - m + 1;
    int max = t * (t - 1) / 2;
    int x = n / m - 1;
    int min = m * (1 + x) * (x / 2);
    cout << max <<' '<< min;
    return 0;
}