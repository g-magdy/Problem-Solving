#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *cities = new int[n];
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    int min, max;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << cities[1] - cities[0] << ' ' << cities[n - 1] - cities[0];
        }
        else if (i == n - 1)
        {
            cout << cities[n-1] - cities[n-2] << ' ' << cities[n - 1] - cities[0];
        }
        else
        {
            int bd = abs(cities[i] - cities[i - 1]);
            int fd = abs(cities[i + 1] - cities[i]);
            int edge1 = abs(cities[i] - cities[0]);
            int edge2 = abs(cities[i] - cities[n-1]);
            min = (bd < fd) ? bd : fd;
            max = (edge1 > edge2) ? edge1 : edge2;
            cout << min << ' ' << max;
        }
        cout << endl;
    }

    delete[] cities;

    return 0;
}