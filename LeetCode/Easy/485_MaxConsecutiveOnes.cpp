/**
 * Problem Link : https://leetcode.com/problems/max-consecutive-ones/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for(int x : nums){
            if(x==1) {
                count++;
                maxi=max(count,maxi);
            }else count =0;
            
        }return maxi;
        
    }
};
