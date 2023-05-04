#include <iostream>
using namespace std;
int main()
{
    // if at least one rating has changed then the round has been rated for sure

    // if no changes in ratings occured
        // if they are sorted : myabe 
        // if they are not sorted : unrated
    int n;
    cin >> n;
    int *before = new int[n];
    int *after = new int[n];
    bool change = false;
    bool is_sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> before[i];
        cin >> after[i];
        if (before[i] != after[i])
            change = true;
        if (i != 0)
        {
            if (before[i-1] < before[i] && is_sorted)
                is_sorted = false;
        }
    }
    if (change)
        cout << "rated";
    else if (!is_sorted)
        cout << "unrated";
    else
        cout << "maybe";
    return 0;
}

