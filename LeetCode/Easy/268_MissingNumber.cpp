/**
 * Problem Link : https://leetcode.com/problems/missing-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum = 0;
        for(int x : nums) sum+=x;
        int n = nums.size();
        return (n*(n+1))/2-sum;
        
    }
};
