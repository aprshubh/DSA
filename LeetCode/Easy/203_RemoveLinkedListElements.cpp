/**
 * Problem Link : https://leetcode.com/problems/remove-linked-list-elements/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while (head && head->val == val)
            head = head->next;
        ListNode* temp = head;
        while (head && head->next) {
            if (head->next->val == val) {
                if (head->next->next)
                    head->next = head->next->next;
                else
                    head->next = NULL;
            }else head=head->next;
        }
        return temp;
    }
};
