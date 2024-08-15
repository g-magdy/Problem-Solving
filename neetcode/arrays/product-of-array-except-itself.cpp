#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> & nums)
{
    vector<int> leftProduct(nums.size());
    vector<int> rightProduct(nums.size());
    vector<int> result(nums.size());

    leftProduct[0] = 1;
    rightProduct[nums.size() - 1] = 1;

    for (int i = 1; i < nums.size(); i++)
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];

    for (int j = nums.size() - 2; j >= 0; j--)
        rightProduct[j] = rightProduct[j + 1] * nums[j + 1];

    for (int k = 0; k < nums.size(); k++)
        result[k] = leftProduct[k] * rightProduct[k];

    return result;
}