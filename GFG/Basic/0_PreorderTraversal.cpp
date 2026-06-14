/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/preorder-traversal/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*
class Node
{
	int data;
	Node* left;
	Node* right;
	
	Node(int x) {
		data = x;
		left = right = NULL;
	}
};
*/

class Solution {
	public:
	void helper(Node* root, vector <int>&ans) {
	    if (!root) return ;
		ans.push_back(root->data);
		helper(root->left,ans);
		helper(root->right,ans);
	}
	vector<int> preOrder(Node* root) {
		
		vector<int> ans;
		helper(root,ans);
		return ans;
		
	}
};

