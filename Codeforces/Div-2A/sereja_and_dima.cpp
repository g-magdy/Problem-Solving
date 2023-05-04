#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> playing_cards;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        playing_cards.push_back(c);
    }
    sort(playing_cards.begin(), playing_cards.end());
    int sereja = 0, dima = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sereja += playing_cards.back();
        else
            dima += playing_cards.back();
    
        playing_cards.pop_back();
    }
    cout << sereja << " " << dima;
    return 0;
}