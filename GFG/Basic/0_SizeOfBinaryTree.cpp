/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/size-of-binary-tree/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
	void helper(Node* root, int&size) {
		if (!root)
			return ;
		size++;
		helper(root->left, size);
		helper(root->right, size);
		
	}
	
    int getSize(Node* root) {
        
       int size= 0;
       helper(root,size);
       return size;
        
    }
};
