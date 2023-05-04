#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec;
    char c = 0;
    do
    {
        cin >> c;
        if (c >= 97 && c<= 122)
            vec.push_back(c);
    } while (c != '}');
    sort(vec.begin(), vec.end());
    int n_distinct = 0;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] != vec[i+1])
            n_distinct++;
    cout << n_distinct;
    return 0;
}
