/**
 * Problem Link : https://leetcode.com/problems/squares-of-a-sorted-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int idx = n - 1;

        while (left <= right) {

            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];

            if (l > r) {
                ans[idx] = l;
                left++;
            } else {
                ans[idx] = r;
                right--;
            }

            idx--;
        }

        return ans;
    }
};
