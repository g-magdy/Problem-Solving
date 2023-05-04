#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char previous = '0';
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char current;
        cin >> current;
        if (current == previous)
        {
            count++;
        }
        previous = current;
    }
    cout << count;
    return 0;
}