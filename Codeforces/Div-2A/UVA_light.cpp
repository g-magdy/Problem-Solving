#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int primes[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    // input data
    vector<unsigned long long> in;
    unsigned long long n;
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
        bool isOn = false;
        for (int i = 1; i <= n; i++)
            if (n % i == 0)
                isOn = !isOn;
        if (isOn)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}