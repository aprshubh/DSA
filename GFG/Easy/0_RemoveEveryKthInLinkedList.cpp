/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

/* Structure for Link list node
class Node {
	public:
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* deleteK(Node* head, int K) {
		
		Node* curr = head;
		
		while (curr) {
			for (int i = 1; i < K - 1 && curr; i++)
				curr = curr->next;
			
			if (curr == NULL || curr->next == NULL)
				break;
			
			curr->next = curr->next->next;
			curr = curr->next;
		}return head;
		
	}
};

