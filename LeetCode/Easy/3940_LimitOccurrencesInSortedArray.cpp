/**
 * Problem Link : https://leetcode.com/problems/limit-occurrences-in-sorted-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int  count  =1;
        int j=0;
        for(int i = 1; i<nums.size();i++){
            if (nums[i]==nums[i-1]) count++;
            else count = 1;
                
            if(count<=k) {
                j++;
                nums[j]=nums[i];
                }
            
        }nums.resize(j+1);
        return nums;
    }
};
