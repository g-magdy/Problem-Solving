#include <iostream>
using namespace std;

int main()
{
    int k, r, num_of_shovels = 1;
    cin >> k >> r;
    int price = k;
    while (price % 10 != r && price % 10 != 0)
    {
        price += k;
        num_of_shovels++;
    }
    cout << num_of_shovels;
    return 0;
}