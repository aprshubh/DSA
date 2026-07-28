/**
 * Problem Link : https://leetcode.com/problems/palindrome-linked-list/
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
    ListNode* reverse(ListNode* Node) {

        ListNode* prev = NULL;
        ListNode* curr = Node;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* first = head;
        ListNode* second = reverse(slow);
        while (second) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};
