/**
 * Problem Link : https://leetcode.com/problems/house-robber/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int a = 0;
        int b =nums[0];
        int c = nums[1];
        for(int i = 2 ;i<nums.size();i++){
            int d = nums[i]+max(a,b);
            a=b;
            b=c;
            c=d;

        }return max(c,b);
        
    }
};
