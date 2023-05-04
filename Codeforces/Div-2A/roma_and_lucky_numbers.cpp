#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        int n_lucky = 0;
        for (int i = 0; num[i] != '\0'; i++)
            if (num[i] == '4' || num[i] == '7')
                n_lucky++;
        result += (n_lucky <= k) ? 1 : 0;
    }
    cout << result;
    return 0;
}