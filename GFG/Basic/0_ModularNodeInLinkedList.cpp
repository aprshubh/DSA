/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/modular-node/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    int modularNode(Node *head, int k) {
        // code here
        
        
        int ans = -1;
        
        int count=0;
        while(head){
            count++;
            if(count%k==0) ans=head->data;
            head=head->next;
        }return ans;
        
    }
};
