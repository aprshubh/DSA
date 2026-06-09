/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
class Node {
	public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* deleteNode(Node* head, int x) {
		
		if (x == 1)
			return head->next;
		
		Node* curr = head;
		for (int i = 1; i<x - 1; i++) {
			curr = curr->next;
		}
		curr->next = curr->next->next;
		return head;
		
	}
};

