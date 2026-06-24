/**
 * Problem Link : https://leetcode.com/problems/move-zeroes/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                if (i != k)
                    swap(nums[i], nums[k]);
                k++;
            }
        }
    }
};
