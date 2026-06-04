/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure of linked list Node
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	int getCount(Node* head) {
		int length = 0;
		
		while (head != nullptr) {
			length++;
			head = head->next;
		}
		
		return length;
	}
};

