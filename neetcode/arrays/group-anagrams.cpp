#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string getKey(string s)
{
    vector<int> counts(26);
    for (char i : s)
        counts[i - 'a']++;

    string key = "";
    for (int c : counts)
        key.append(to_string(c)+ ' ');

    return key;
}

vector<vector<string>> grounpAnagrams(vector<string>& strs)
{
    unordered_map<string, vector<string>> mp;

    for (auto s : strs)
        mp[getKey(s)].push_back(s);

    vector<vector<string>> result;
    for (auto i : mp)
        result.push_back(i.second);

    return result;
}

// bool isAnagram(string s, string t)
// {
//     unordered_map<int, int> mp;

//     for (int i = 0; s[i] != '\0'; i++)
//         if (mp.find(s[i]) == mp.end())
//             mp[s[i]] = 1;
//         else
//             mp[s[i]]++;

//     for (int i = 0; t[i] != '\0'; i++)
//         if (mp.find(t[i]) == mp.end())
//             return false;
//         else
//             mp[t[i]]--;

//     for (auto i : mp)
//         if (i.second != 0)
//             return false;
    
//     return true;
// }

// vector<vector<string>> groupAnagrams(vector<string>& strs)
// {
//     vector<vector<string>> result;

//     for (int i = 0; i < strs.size(); i++)
//     {
//         vector<string> r;
//         r.push_back(strs[i]);
//         for (auto j = i + 1; j < strs.size(); j++)
//         {
//             if (isAnagram(strs[i], strs[j]))
//             {
//                 r.push_back(strs[j]);
//                 strs.erase(strs.begin() + j);
//             }
//         }
//         strs.erase(strs.begin() + i);

//         result.push_back(r);
//     }
//     return result;
// }
