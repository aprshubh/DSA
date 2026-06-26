/**
 * Problem Link : https://leetcode.com/problems/search-insert-position/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left + ((right-left)>>1);
            if(nums[mid]>=target) right = mid -1;
            else left = mid +1;
        }return left;
        
    }
};
