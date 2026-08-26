/**
 * Problem Link : https://leetcode.com/problems/smallest-pair-with-different-frequencies/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        int x = *min_element(nums.begin(), nums.end());

        int y = INT_MAX;

        for (auto &[num, freq] : mp) {
            if (num > x && mp[num] != mp[x]) {
                y = min(y, num);
            }
        }

        if (y == INT_MAX) return {-1, -1};

        return {x, y};
    }
};
