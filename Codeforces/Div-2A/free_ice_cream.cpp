#include<iostream>
using namespace std;
int main()
{
    int n;
    long long our_total; // 0 < x < 10^9
    cin >> n >> our_total;
    int distressed = 0;
    for (int i = 0; i < n; i++)
    {
        char sign;
        int val;
        cin >> sign;
        cin >> val;
        if (sign == '+')
            our_total += val;
        else if (our_total >= val)
            our_total -= val;
        else
            distressed++;
    }
    cout << our_total << " "<< distressed;
    return 0;
}