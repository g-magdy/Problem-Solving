#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int greatest = 0;
        int nAccounts = accounts.size();
        int nBanks = accounts[0].size();
        for (int i = 0; i < nAccounts; i++)
        {
            int sum = 0;
            for (int j = 0; j < nBanks; j++)
                sum += accounts[i][j];
            greatest = (sum > greatest) ? sum : greatest;
        }
        return greatest;
    }
};