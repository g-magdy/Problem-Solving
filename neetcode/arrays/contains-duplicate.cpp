#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&nums)
{
    unordered_map<int, int> mp;
    for (auto i : nums)
    {
        if (mp.find(i) != mp.end())
            return true;
        else
            mp[i] = 1;
    }
    return false;
}

int main()
{

    return 0;
}