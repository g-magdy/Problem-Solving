#include <iostream>
using namespace std;
#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) // i <= sqrt(n)
        if (n % i == 0)
            return false;
    return true;
}

int findNextPrime(int n)
{
    if (!isPrime(n))
        return -1;

    int next = n+1;
    while (true)
    {
        if (isPrime(next))
            break;
        next++;
    }
    return next;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (findNextPrime(a) == b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}