#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> vec;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '+')
            vec.push_back(s[i] - '1' + 1);
    }
    sort(vec.begin(), vec.end());
    int length = vec.size();
    for (int i = 0; i < length; i++)
    {
        if (i == length-1)
            cout << vec[i];
        else
        cout << vec[i] << '+';
    }
    return 0;
}