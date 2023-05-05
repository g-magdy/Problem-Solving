#include <iostream>
using namespace std;
int main()
{
    string numbers = "";
    for (int i = 1; numbers.size() < 1000; i++)
        numbers.append(to_string(i));
    int n;
    cin >> n;
    cout << numbers[n-1];
    return 0;
}