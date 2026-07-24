/**
 * Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int val = INT_MIN;
        int k = 0;
        for ( int i = 0; i<nums.size();i++){
            if(nums[i]!=val){
                val = nums[i];
                if(i!=k) swap(nums[i],nums[k]);
                k++;
            }
        }return k;
        
    }
};
