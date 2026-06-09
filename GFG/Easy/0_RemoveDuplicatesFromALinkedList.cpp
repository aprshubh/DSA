/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
The structure of linked list is the following

struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
*/

class Solution {
	public:
	Node *removeDuplicates(Node *head) {
		
		unordered_set<int> st;
		
		Node* curr = head;
		st.insert(curr->data);
		
		while (curr->next) {
			if (st.count(curr->next->data)) {
				curr->next = curr->next->next;
			} else {
				curr = curr->next;
				st.insert(curr->data); }
				
			} curr->next = NULL;
			return head;
		}
	};

