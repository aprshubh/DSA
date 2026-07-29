/**
 * Problem Link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Platform     : LeetCode
 * Difficulty   : Medium
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0);
        dummy->next=head;

        ListNode* slow=dummy;
        ListNode* fast=dummy;
        while(fast && n>=0) {
            fast=fast->next;
            n--;
        }
        while(fast){
            slow=slow->next;
            fast=fast->next;

        }slow->next=slow->next->next;
        return dummy->next;




        
    }
};
