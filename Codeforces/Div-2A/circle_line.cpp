#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *d = new int[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        total += d[i];
    }
    int s, t;
    cin >> s >> t;
    int start = (s < t) ? s : t;
    int end = s + t - start;
    if (start == end)
        cout << 0;
    else
    {
        int s1 = 0;
        for (int i = start-1; i <= end-2; i++)
            s1 += d[i];
        int s2 = total - s1;
        cout << (s1 < s2 ? s1 : s2);
    }
    delete[] d;
    return 0;
}