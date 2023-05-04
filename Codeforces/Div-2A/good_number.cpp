#include <iostream>
using namespace std;

bool isGood(long long number, int k)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (digit> k)
            return false;
        number /= 10;
    }
    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int numOfGood = 0;
    long long number;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if (isGood(number, k))
            numOfGood++;
    }
    cout << numOfGood;
    return 0;
}
