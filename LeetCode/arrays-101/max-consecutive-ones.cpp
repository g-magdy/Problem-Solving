#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, streak = 0, length = nums.size();
        for (int i = 0; i < length; i++)
        {
            if (nums[i])
            {
                streak++;
                max = (streak > max) ? streak : max;
            }
            else
            {
                streak = 0;
            }
        }
        return max;
    }
};