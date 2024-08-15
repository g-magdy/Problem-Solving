#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool byValues(const pair<int, int>&a, const pair<int, int>& b)
{
    return a.second > b.second;
}

vector<int> topKFrequent(vector<int>& nums, int k)
{
    map<int, int> freq;

    for (auto i: nums)
        freq[i]++;

    vector<pair<int, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), byValues);

    vector<int> result;
    for (auto it = vec.begin(); k > 0; it++)
    {
        result.push_back(it->first);
        k--;
    }
    return result;
}