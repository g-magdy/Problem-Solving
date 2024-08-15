#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static bool isValidNine(const vector<char>& vec)
    {
        unordered_map<char, int> mp;
        for (const auto & i : vec)
            if (i == '.')
                continue;
            else if (mp.find(i) == mp.end())
                mp[i] = 1;
            else // you found it again!!
                return false;
        
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for (const auto& v : board)
            if (isValidNine(v) == false)
                return false;
        
        //check cols
        for (int i = 0; i < 9; i++)
        {
            vector<char> v(9);
            for (int j = 0; j < 9; j++)
                v[j] = board[j][i];
            
            if (isValidNine(v) == false)
                return false;
        }

        // check squares
        for (int I = 0; I < 9; I += 3)
        {
            for (int J = 0; J < 9; J += 3)
            {
                vector<char> v(9);
                for (int i = 0; i < 3; i++)
                    for (int j = 0; j < 3; j++)
                        v[3*i + j] = board[I + i][J + j];

                if (isValidNine(v) == false)
                    return false;
            }
        }

        return true;
    }