/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/delete-middle-of-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        
        if(!head || !head->next) return NULL;
        
        Node* slow =head;
        Node* fast= head;
        Node* prev = NULL;
        
        while(fast && fast->next){
            prev = slow;
            slow= slow->next;
            fast= fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
};
