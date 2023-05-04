#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool *can_pass = new bool[n];
    for (int i = 0; i < n; i++)
        can_pass[i] = false;

    int x;
    cin >> x;
    int level;
    for (int i = 0; i < x; i++)
    {
        cin >> level;
        can_pass[level - 1] = true;
    }

    int y;
    cin >> y;
    int lvl;
    for (int i = 0; i < y; i++)
    {
        cin >> lvl;
        can_pass[lvl - 1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (can_pass[i] == false)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}