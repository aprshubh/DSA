/**
 * Problem Link : https://leetcode.com/problems/binary-search/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int>& nums, int target , int left,int right){
        int mid = left +((right-left)>>1);
        if(nums[mid]==target) return mid;
        else if(mid>left&& nums[mid]>target) return bs(nums,target,left,mid-1);
        else if(mid<right && nums[mid]<target) return bs(nums,target ,mid+1,right);
        else return -1;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
        
    }
};
