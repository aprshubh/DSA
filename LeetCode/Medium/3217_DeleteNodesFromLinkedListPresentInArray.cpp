/**
 * Problem Link : https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> st(nums.begin(),nums.end());

        while(head && st.count(head->val)) head=head->next;
        ListNode* temp=head;
        while(head && head->next) {
            if(st.count(head->next->val)){
                if(head->next->next) head->next=head->next->next;
                else head->next=NULL;

            }else head= head->next;
        }return temp;

        
    }
};
