/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            
        }return slow->data;
    }
};
