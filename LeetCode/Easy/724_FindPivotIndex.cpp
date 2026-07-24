/**
 * Problem Link : https://leetcode.com/problems/find-pivot-index/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int x : nums)
            total += x;

        int leftSum = 0;
        int ans = -1;

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                ans = i;
                break;
            }

            leftSum += nums[i];
        }

        return ans;
    }
};
