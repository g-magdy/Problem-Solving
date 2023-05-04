#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<char> moves, cpy;
    int coords[n];
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        moves.push_back(c);
        cpy.push_back(c);
    }
    for (int i = 0; i < n; i++)
        cin >> coords[i];
    
    sort(cpy.begin(), cpy.end());
    if (moves == cpy)
        cout << -1;
    else
    {
        int currStep = 1;
        bool finish = false;
        while (!finish)
        {
            for (int i = 0; i < n; i++)
            {
                if (moves[i] == 'L')
                    coords[i]--;
                else
                    coords[i]++;
                if (i != 0 && coords[i] == coords[i-1])
                    finish = true;
            }
            if (!finish)
                currStep++;
        }
        cout << currStep;
    }
    return 0;
}