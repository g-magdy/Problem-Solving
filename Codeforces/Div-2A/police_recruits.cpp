#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int officers = 0, crimes = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == -1 && officers == 0)
        {
            crimes++;
        }
        else if (num == -1 && officers > 0)
        {
            officers--;
        }
        else
        {
            officers += num;
        }
    }
    cout << crimes;
    return 0;
}