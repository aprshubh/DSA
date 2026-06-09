/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of a linked list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int count(Node* head, int key) {
        
        int count = 0;
        while(head){
            if(head->data==key) count++;
            head=head->next;
        }return count;
    }
};
