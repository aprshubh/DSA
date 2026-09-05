/**
 * Problem Link : https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
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
    void helper(TreeNode* root, vector<int>& ans, int level) {
        if (!root)
            return;
        if (level > (int)ans.size() - 1)
            ans.push_back(root->val);
        else
            ans[level] += root->val;
        helper(root->left, ans, level + 1);
        helper(root->right, ans, level + 1);
    }
    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        int level = 0;
        helper(root, ans, level);
        int index = max_element(ans.begin(), ans.end()) - ans.begin();
        return index +1;
    }
};
