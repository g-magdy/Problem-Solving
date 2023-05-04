#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> coins;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        coins.push_back(val);
        total += val;
    }
    sort(coins.begin(), coins.end());
    int mysum = 0;
    int twin_sum = total;
    int i = n-1, num = 0;
    while (mysum <= twin_sum)
    {
        mysum += coins[i];
        twin_sum -= coins[i];
        i--;
        num++;
    }
    cout << num;
    return 0;
}