#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (s.find(*it - 1) == s.end())
        {
            int length = 1;
            while (s.count(*it + length))
                length++;

            longest = max(longest, length);
        }
    }
    return longest;
}

int main()
{
    
    longestConsecutive(vec);
    return 0;
}