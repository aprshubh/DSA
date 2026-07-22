/**
 * Problem Link : https://leetcode.com/problems/intersection-of-two-linked-lists/
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int a = 0;
        int b = 0;
        ListNode *tempa=headA;
        ListNode *tempb=headB;
        while(tempa) {
            a++;
            tempa=tempa->next;
        }
        while(tempb) {
            b++;
            tempb=tempb->next;
        }
        int c =abs(a-b);
        while(c>0){
            (a>b)? headA=headA->next:headB=headB->next;
            c--;
        }
        while(headA || headB) {
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }return NULL;
        
    }
};
