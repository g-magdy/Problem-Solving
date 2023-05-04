#include <iostream>
using namespace std;
int main()
{
    int n, score1 = 0, score2 = 0;
    string team1, team2;
    cin >> n;
    
    cin >> team1;
    score1++;
    if (n == 1)
    {
        cout << team1;
        return 0;
    }

    string str;
    for (int i = 1; i< n; i++)
    {
        cin>>str;
        if (str == team1)
            score1++;
        else
        {
            team2 = str;
            score2++;
        }
    }
    if (score1 > score2)
        cout << team1;
    else
        cout << team2;
    return 0;
}