#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *orignal = new int[n];
    int *final = new int[n];
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        orignal[i] = s[i] - '0';
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        final[i] = s[i] - '0';
    int totalMoves = 0;
    for (int i = 0; i < n; i++)
    {
        int d = abs(final[i] - orignal[i]);
        totalMoves += (d < 5) ? d : 10 - d;
    }
    cout << totalMoves;
    return 0;
}