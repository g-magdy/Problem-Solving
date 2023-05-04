#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> shoes;
    int n_distinct = 0;
    int s;
    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        shoes.push_back(s);
    }
    sort(shoes.begin(), shoes.end());
    for (int i = 0; i < 4; i++)
        if (shoes[i] != shoes[i+1])
            n_distinct++;
    cout << 4 - n_distinct;

    return 0;
}
        // for (int j = 0; j < 4; j++)
        //     if (i != j && shoes[i] == shoes[j])
        //         n_distinct--;