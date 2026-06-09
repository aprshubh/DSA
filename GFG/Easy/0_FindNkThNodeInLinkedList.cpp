/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int fractionalNode(struct Node *head, int k) {
        // your code here
        Node* fast = head;
        int i = 1;
        int count = 1;
        
        while(fast){
            int j = ceil((double)count / k);
            if(i<j){
                head=head->next;
                i++;
            }fast=fast->next;
            count++;
        }return head->data;
    }
};
