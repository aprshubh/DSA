/**
 * Problem Link : https://leetcode.com/problems/leaf-similar-trees/
 * Platform     : LeetCode
 * Difficulty   : Easy
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
    void helper1(TreeNode* root1, vector<int>& arr1) {
        if (!root1)
            return;
        if (!root1->left && !root1->right) {
            arr1.push_back(root1->val);
        }
        helper1(root1->left, arr1);
        helper1(root1->right, arr1);
    }
    void helper2(TreeNode* root2, vector<int>& arr2) {
        if (!root2)
            return;
        if (!root2->left && !root2->right) {
            arr2.push_back(root2->val);
        }
        helper2(root2->left, arr2);
        helper2(root2->right, arr2);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1;
        vector<int> arr2;
        helper1(root1, arr1);
        helper2(root2, arr2);
        int i = 0;
        int j = 0;
        if(arr1.size()!=arr2.size()) return false;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]!=arr2[j]) return false;
            i++;
            j++;
        }return true;
    }
};
