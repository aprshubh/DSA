/**
 * Problem Link : https://leetcode.com/problems/house-robber-ii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int house(vector<int>& nums, int n, int m) {
        int a = nums[n];
        int b = max(nums[n], nums[n + 1]);
        for (int i = n + 2; i < m; i++) {
            int c = max(b, nums[i] + a);
            a = b;
            b = c;
        }
        return b;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        return max(house(nums,0,n-1),house(nums,1,n));
    }
};
