#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p, v, t;
    int attempted_problems = 0;
    for (int i = 0; i < n; i ++)
    {
        cin >> p >> v >> t;
        attempted_problems += (p + v + t >= 2) ? 1 : 0;
    }
    cout << attempted_problems;
    return 0;
}
