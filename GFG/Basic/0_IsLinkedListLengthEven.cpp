/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    bool isEven(Node* head) {
        // code here
        int count = 0;
        while(head){
            count++;
            head=head->next;
        }return count%2==0;
    }
};
