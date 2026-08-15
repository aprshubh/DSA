/**
 * Problem Link : https://leetcode.com/problems/binary-search/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& nums, int target, int left, int right) {
        if (left > right) return -1;

        int mid = left + ((right - left) >> 1);

        if (nums[mid] == target)
            return mid;

        if (nums[mid] > target)
            return bs(nums, target, left, mid - 1);

        return bs(nums, target, mid + 1, right);
    }

    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size() - 1);
    }
};
