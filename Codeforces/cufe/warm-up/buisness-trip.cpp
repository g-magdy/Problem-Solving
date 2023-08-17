#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<int> months;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        months.push_back(x);
    }
    sort(months.begin(), months.end());
    int count = 0;
    while (k > 0 && !months.empty())
    {
        k -= months.back();
        months.pop_back();
        count++;
    }
    cout << ((k <= 0) ? count : -1);
    return 0;
}