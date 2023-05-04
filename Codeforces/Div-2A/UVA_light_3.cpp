#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector <unsigned int> numbers;
    unsigned int n;
    do
    {
        cin >> n;
        if (n != 0)
            numbers.push_back(n);
    } while (n != 0);

    for (int i = 0; i < numbers.size() ; i++)
    {
        double s = sqrt(numbers[i]);
        if (s - int(s) == 0) // has a square root -> odd number of divisors
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}