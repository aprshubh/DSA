/**
 * Problem Link : https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int count = 0;
        int left = 0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]!=0) left++;
            else if ( nums[right]==0) right--;
            else{
                swap(nums[left],nums[right]);
                left++;
                right--;
                count++;
            }
        }return count;
        
    }
};
