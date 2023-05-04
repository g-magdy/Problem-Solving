#include <iostream>
#include <math.h>

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    for (long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

long long findNextPrime(long long n)
{
    if (!isPrime(n))
        return -1;

    long long next = n+1;
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
    using namespace std;
    int prime = 2;
    cout << prime << " ";
    for (int i = 0; i < 9; i++)
    {
        prime = findNextPrime(prime);
        cout << prime << " ";
    }
    return 0;
}