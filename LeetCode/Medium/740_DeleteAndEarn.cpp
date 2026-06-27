/**
 * Problem Link : https://leetcode.com/problems/delete-and-earn/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {

        int maxi = *max_element(nums.begin(), nums.end());
        if (maxi == 0)
            return points[0];
        vector<int> ans(maxi + 1, 0);
        for (int x : nums)
            ans[x] += x;
        int a = ans[0];
        int b = max(ans[0], ans[1]);
        for (int i = 2; i < ans.size(); i++) {
            int c = max(b, a + ans[i]);
            a = b;
            b = c;
        }
        return b;
    }
};
