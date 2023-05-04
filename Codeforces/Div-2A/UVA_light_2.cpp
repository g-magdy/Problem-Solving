#include <iostream>
#include <vector>
using namespace std;

unsigned int countDivisors(unsigned int n)
{
    unsigned int cnt = 0;
    for (unsigned int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main()
{
    int primes[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    // input data
    vector<unsigned int> in;
    unsigned int n;
    do
    {
        cin >> n;
        if (n!= 0)
            in.push_back(n);
    } while (n != 0);
    
    // do math for each number in data
    for (int i = 0; i < in.size(); i++)
    {
        n = in[i];
        int numOfdiv = countDivisors(n);
        if (numOfdiv%2 == 1) 
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}