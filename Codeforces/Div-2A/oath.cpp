#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *stewards = new int[n];
    int min, max, n_support = 0;
    cin >> stewards[0];
    min = stewards[0];
    max = stewards[0];
    
    for (int i = 1; i < n; i++)
    {
        cin >> stewards[i];
        if (stewards[i] <= min)
            min = stewards[i];
        else if (stewards[i] > max)
            max = stewards[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (stewards[i] > min && stewards[i] < max)
            n_support++;
    }
    cout << n_support;

    return 0;
}