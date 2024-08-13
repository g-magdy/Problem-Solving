/*
this is the first problem I meet now that I think
for a little bit before codeing the solution
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
        mp[nums[i]] = i;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) != mp.end()
        && i != mp[target - nums[i]])
            return {i, mp[target - nums[i]]};
    }
    return {};
}

// ! an important point is that you cannot pick the same element twice
//* so i need to check the index not the value