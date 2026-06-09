/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/join-two-linked-lists/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* joinLists(Node* head1, Node* head2) {
        // code here
        Node* curr= head1;
        while(curr->next){
            curr=curr->next;
        }curr->next=head2;
        return head1;
    }
};
