/**
 * Problem Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lower(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] >= target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
    int upper(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower(nums, target);
        if (first == nums.size() || nums[first] != target)
            return {-1, -1};
        int last = upper(nums, target);
        return {first, last - 1};
    }
};
