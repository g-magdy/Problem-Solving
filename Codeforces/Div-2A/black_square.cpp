#include <iostream>
#include <string>
using namespace std;

int main()
{
    int strip_weights[4];
    for (int i = 0; i < 4; i++)
        cin >> strip_weights[i];

    string s;
    int calories = 0;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int w = s[i] - '1';
        calories += strip_weights[w];
    }
    cout << calories;

    return 0;
}