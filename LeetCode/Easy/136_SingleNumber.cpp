/**
 * Problem Link : https://leetcode.com/problems/single-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans=nums[0];
        for(int i = 1; i<nums.size();i++){
            ans^=nums[i];
        }return ans;
    }
};
