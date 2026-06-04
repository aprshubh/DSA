/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
 * Platform     : GFG
 * Difficulty   : Basic
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
	Node *insertAtEnd(Node *head, int x) {
		
		Node* newNode = new Node(x);
		
		if (head==nullptr) return newNode;
		Node*current = head;
		while(current->next!=nullptr) current = current->next;
		current->next=newNode;
		return head;
	}
};

