#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
        cin >> words[i];
    for (int i = 0; i < n; i++)
    {
        int n_chars = words[i].length();
        if (n_chars <= 10)
            cout << words[i] << endl;
        else
            cout << words[i][0] << n_chars - 2 << words[i][n_chars - 1] << endl;
    }
    return 0;
}