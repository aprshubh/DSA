/**
 * Problem Link : https://leetcode.com/problems/jump-game/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        for(int i = 0;i<nums.size();i++){
            if(i>maxreach) return false;
            maxreach=max(maxreach,i+nums[i]);
        }return true;
        
    }
};
