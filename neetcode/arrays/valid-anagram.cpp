#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    unordered_map<char, int> mp;

    for (auto i : s)
        if (mp.find(i) == mp.end())
            mp[i] = 1;
        else
            mp[i]++;

    for (auto i : t)
        if (mp.find(i) == mp.end())
            return false;
        else
            mp[i]--;
    
    for (auto x : mp)
        if (x.second != 0)
            return false;

    return true;
}