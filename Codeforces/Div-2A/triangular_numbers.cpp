#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    bool found = false;
    int sum = 0;
    for (int i = 1; sum < number && !found; i++)
    {
        sum = i * (i + 1) / 2;
        if (number == sum)
            found = true;
    }
    if (found)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}