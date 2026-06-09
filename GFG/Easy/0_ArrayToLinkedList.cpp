/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/introduction-to-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {

        Node* dummy = new Node(-1);
        Node* tail = dummy;

        for(int x : arr) {
            tail->next = new Node(x);
            tail = tail->next;
        }

        return dummy->next;
    }
};
