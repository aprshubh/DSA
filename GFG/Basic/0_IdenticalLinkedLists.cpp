/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/identical-linked-lists/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Strucutre of a Node in linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        while(head1 && head2){
            if(head1->data != head2->data) return false;
            head1=head1->next;
            head2=head2->next;
            
        } return !head1 && !head2;
    }
};
