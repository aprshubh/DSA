/**
 * Problem Link : https://leetcode.com/problems/path-sum-ii/
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> temp, TreeNode* root, int targetSum) {
        if (!root) return ;
        targetSum-=root->val;
        temp.push_back(root->val);
        if(targetSum==0 && !root->left && !root->right){
            ans.push_back(temp);
        } helper(ans,temp, root->left, targetSum);
        helper(ans,temp, root->right, targetSum);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans,temp, root, targetSum);
        return ans;
    }
};
