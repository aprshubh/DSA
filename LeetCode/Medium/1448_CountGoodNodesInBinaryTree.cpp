/**
 * Problem Link : https://leetcode.com/problems/count-good-nodes-in-binary-tree/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void helper(TreeNode* root,int &count,int maxi ){
    if(!root) return;
    if(root->val>=maxi) {
        count++;
        maxi=max(maxi,root->val);
    }
    helper(root->left,count,maxi);
    helper(root->right,count,maxi);

}
    int goodNodes(TreeNode* root) {
        int count = 0;
        helper(root,count,INT_MIN);
        return count;

        
    }
};
