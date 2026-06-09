/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
structure of the node of the list is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
};
*/

class Solution {
	public:
	// Should return head of the modified linked list
	Node* sortedInsert(Node* head, int key) {
		
		Node* newNode = new Node(key);
		
		if (head == NULL || key <= head->data) {
			newNode->next = head;
			return newNode;
		}
		
		Node* curr = head;
		
		while (curr->next && curr->next->data < key) {
			curr = curr->next;
		}
		
		newNode->next = curr->next;
		curr->next = newNode;
		
		return head;
	}
	
};

