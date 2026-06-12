/**
 * Problem Link : https://leetcode.com/problems/count-partitions-with-even-sum-difference/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int sum = 0;
        for (int x : nums)
            sum += x;
        return (sum % 2 == 0) ? nums.size() - 1 : 0;
    }
};
