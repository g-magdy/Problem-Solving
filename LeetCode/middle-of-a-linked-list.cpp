#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode * trav = head;
        while(trav)
        {
            n++;
            trav= trav->next;
        }
        trav = head;
        n /= 2;
        while (n > 0)
        {
            trav = trav->next;
            n--;
        }
        return trav;
    }
};