/**
 * Problem Link : https://leetcode.com/problems/two-sum/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int n = nums.size();
        map.reserve(n);
        for (int i = 0; i < n; i++) {
            int dig = target - nums[i];
            if (map.count(dig))
                return {map[dig], i};
            map[nums[i]] = i;
        }
        return {};
    }
};
