/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/*
class Node {
	public:
	int data ;
	Node *next ;
	
	Node(int x) {
		data = x ;
		next = nullptr ;
	}
};
*/

class Solution {
	public:
	Node* reverseList(Node* head) {
		Node* prev = nullptr;
		Node* curr = head;
		while (curr) {
			Node* nextNode = curr->next;
			curr->next = prev;
			prev = curr;
			curr = nextNode;
		}
		return prev;
		
	}
};

