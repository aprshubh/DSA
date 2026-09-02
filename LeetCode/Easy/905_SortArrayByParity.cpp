/**
 * Problem Link : https://leetcode.com/problems/sort-array-by-parity/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(left <right){
            while(left<right && nums[left]%2==0) left++;
            while( left<right && nums[right]%2!=0) right--;
            if(left<right){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
        }return nums;
        
    }
};
