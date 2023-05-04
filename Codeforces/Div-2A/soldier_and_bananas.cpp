#include <iostream>
using namespace std;
int main()
{
    int k, budget, numBan;
    cin >> k >> budget >> numBan;
    int price = k * (1 + numBan) * (numBan / 2.0);
    int borrow = price - budget;
    cout << ((borrow > 0) ? borrow : 0);
    return 0;
}