#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    sort(name.begin(), name.end());
    int n_distinct = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != name[i+1])
            n_distinct++;
    }
    //cout << name.length() << endl << n_distinct << endl;
    if (n_distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}