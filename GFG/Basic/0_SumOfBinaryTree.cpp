/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*
Definition for Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/
class Solution {
	public:
	void helper(Node* root, int&sum) {
		if (!root)
			return ;
		sum += root->data;
		helper(root->left, sum);
		helper(root->right, sum);
		
	}
	
	int sumBT(Node* root) {
		int sum = 0;
		helper(root, sum);
		return sum;
		
	}
};

