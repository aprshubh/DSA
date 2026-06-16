/**
 * Problem Link : https://leetcode.com/problems/single-number-ii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; i++) {
            int sum = 0;
            for (int x : nums) {
                if ((x >> i) & 1)
                    sum++;
            }
            if (sum % 3 != 0)
                ans = ans | (1 << i);
        }
        return ans;
    }
};
