/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child
struct Node
{
	int data;
	Node* left;
	Node* right;
}; */

// Class Solution
class Solution {
	public:
	void helper (Node* root, int& count) {
		
		if (!root)
			return;
		if (!root->left && !root->right)
			count++;
		
		helper (root->left, count);
		helper(root->right, count);
		
	}
	int countLeaves(Node* root) {
		int count = 0;
		helper(root, count);
		return count;
		
	}
};

