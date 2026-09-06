/**
 * Problem Link : https://leetcode.com/problems/path-sum-iii/
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
    int count = 0;

    void helper(TreeNode* root, int targetSum, unordered_map<int, int>& mp,
                int sum) {

        if (!root)
            return;

        sum += root->val;

        int dig = sum - targetSum;

        count += mp[dig];

        mp[sum]++;

        helper(root->left, targetSum, mp, sum);
        helper(root->right, targetSum, mp, sum);

        mp[sum]--; 
    }

    int pathSum(TreeNode* root, int targetSum) {

        unordered_map<int, int> mp;

        mp[0] = 1;

        helper(root, targetSum, mp, 0);

        return count;
    }
};
