/**
 * Problem Link : https://leetcode.com/problems/jump-game-ii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0,maxreach=0, curr=0;
        for(int i =0;i<nums.size()-1;i++){
            maxreach=max(maxreach,i+nums[i]);
            if(i ==curr){
                jump++;
                curr=maxreach;
            }
        }return jump;
        
    }
};
