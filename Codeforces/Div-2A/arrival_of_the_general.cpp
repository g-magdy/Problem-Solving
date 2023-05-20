#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, seconds = 0, iMax = 0, iMin = 0;
    cin >> n;
    vector<int> soldiers;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        soldiers.push_back(s);
        iMax = (soldiers[i] > soldiers[iMax]) ? i : iMax;
    }
    int tallest = soldiers[iMax];
    if (tallest != soldiers[0])
    {
        soldiers.erase(soldiers.begin() + iMax);
        soldiers.insert(soldiers.begin(), tallest);
        seconds += iMax;
    }
    for (int i = 0; i < n; i++)
        iMin = (soldiers[i] <= soldiers[iMin]) ? i : iMin;
    if (soldiers[iMin] != soldiers[n-1])
        seconds += (n - 1) - iMin;
    cout << seconds;
    return 0;
}